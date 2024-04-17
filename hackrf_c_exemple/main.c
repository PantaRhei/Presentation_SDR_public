#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include <libhackrf/hackrf.h>



void print_lib_version() {
	char const *v = NULL;
	//version de la lib
	v = hackrf_library_version();
	printf("lib_v: %s\n", v);
	//version release de la lib
	v = hackrf_library_release();
	printf("lib_release: %s\n", v);
	v = NULL;
}

void print_list_device() {
	printf("List of hackrf connected (exemple)\n");
	//struct permettant de lister les device
	hackrf_device_list_t *l = NULL;
	int nb_hack = 0;
	l = hackrf_device_list();
	nb_hack = l->devicecount;
	if (nb_hack == 0) {
		printf("No hackrf device found\n");
	} else {
		for (int i = 0; i < nb_hack; i++) {
			printf("Serial number %s, board type: ", l->serial_numbers[i]);
			//On peut utiliser aussi cette fonction
			//extern ADDAPI const char* ADDCALL hackrf_error_name(enum hackrf_error errcode);
			switch (l->usb_board_ids[i]) {
				case USB_BOARD_ID_JAWBREAKER:
					printf("USB_BOARD_ID_JAWBREAKER\n");
					break;
				case USB_BOARD_ID_HACKRF_ONE:
					printf("USB_BOARD_ID_HACKRF_ONE\n");
					break;
				case USB_BOARD_ID_RAD1O:
					printf("USB_BOARD_ID_RAD1O\n");
					break;
				case USB_BOARD_ID_INVALID:
					printf("USB_BOARD_ID_INVALID\n");
					break;
				default:
					fprintf(stderr, "Error list device type board\n");
			}
		}
	}
}


int rx_callback(hackrf_transfer* transfer) {
    int8_t* buf = (int8_t*)transfer->buffer;
    for (int i = 0; i < 10; i++) {
        printf("%d ", buf[i]);
    }
    printf("\n");
    return 0;
}

int main() {
	hackrf_device* device = NULL;
	char text[1000];
	int result = hackrf_init();
	if (result != HACKRF_SUCCESS) {
		printf("HackRF init failed\n");
		return -1;
	}
	result = hackrf_open(&device);
	if (result != HACKRF_SUCCESS) {
		printf("HackRF not found\n");
		hackrf_exit();
		return 1;
	}
	printf("HackRF is connected\n");
	print_lib_version();
	print_list_device();
	//TODO: il manque les set de freq et bandwith
	const double freq_sample_rate = 10000000;
	result = hackrf_set_sample_rate(device, freq_sample_rate);
	if (result != HACKRF_SUCCESS) {
		printf("Set sample rate failed\n");
		hackrf_close(device);
	    hackrf_exit();
	    return -1;
	}
	const uint64_t freq = 90800000;
	result = hackrf_set_freq(device, freq);
	if (result != HACKRF_SUCCESS) {
		printf("Set freq failed\n");
		hackrf_close(device);
	    hackrf_exit();
	    return -1;
	}

	result = hackrf_start_rx(device, rx_callback, NULL);
	if (result != HACKRF_SUCCESS) {
	    printf("Failed to start RX\n");
	    hackrf_close(device);
	    hackrf_exit();
	    return -1;
	}
	sleep(10);
	result = hackrf_stop_rx(device);
	if (result != HACKRF_SUCCESS) {
		printf("Failed to stop RX\n");
		hackrf_close(device);
		hackrf_exit();
	}


	hackrf_close(device);
	hackrf_exit();
	return 0;
}

