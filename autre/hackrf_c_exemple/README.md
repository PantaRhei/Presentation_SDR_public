Lib hackrf
Pour installer la lib:
```bash
sudo apt install libhackrf-dev
```

Compilation:
```bash
gcc -o main main.c -lhackrf
```


# Fonction interessante
```c
// Fonction de rappel pour la réception de données
//globalement quand le buffer du hackrf sera plein il utilisera cette function 
//pour vider sont buffer
//la doc
/**
 * USB transfer information passed to RX or TX callback.
 * A callback should treat all these fields as read-only except that a TX
 * callback should write to the data buffer and may write to valid_length to
 * indicate that a smaller number of bytes is to be transmitted.
 * @ingroup streaming
 */
typedef struct {
	/** HackRF USB device for this transfer */
	hackrf_device* device;
	/** transfer data buffer (interleaved 8 bit I/Q samples) */
	uint8_t* buffer;
	/** length of data buffer in bytes */
	int buffer_length;
	/** number of buffer bytes that were transferred */
	int valid_length;
	/** User provided RX context. Not used by the library, but available to transfer callbacks for use. Set along with the transfer callback using @ref hackrf_start_rx or @ref hackrf_start_rx_sweep */
	void* rx_ctx;
	/** User provided TX context. Not used by the library, but available to transfer callbacks for use. Set along with the transfer callback using @ref hackrf_start_tx*/
	void* tx_ctx;
} hackrf_transfer;

/**
 * Start receiving
 * 
 * Should be called after setting gains, frequency and sampling rate, as these values won't get reset but instead keep their last value, thus their state is unknown.
 * 
 * The callback is called with a @ref hackrf_transfer object whenever the buffer is full. The callback is called in an async context so no libhackrf functions should be called from it. The callback should treat its argument as read-only.
 * @param device device to configure
 * @param callback rx_callback
 * @param rx_ctx User provided RX context. Not used by the library, but available to @p callback as @ref hackrf_transfer.rx_ctx.
 * @return @ref HACKRF_SUCCESS on success or @ref hackrf_error variant
 * @ingroup streaming
 */
extern ADDAPI int ADDCALL hackrf_start_rx(
	hackrf_device* device,
	hackrf_sample_block_cb_fn callback,
	void* rx_ctx);

/**
 * Stop receiving
 * 
 * @param device device to stop RX on
 * @return @ref HACKRF_SUCCESS on success or @ref hackrf_error variant
 * @ingroup streaming
 */
extern ADDAPI int ADDCALL hackrf_stop_rx(hackrf_device* device);


/**
 * Set sample rate
 * 
 * Sample rate should be in the range 2-20MHz, with the default being 10MHz. Lower & higher values are technically possible, but the performance is not guaranteed.
 * This function also sets the baseband filter bandwidth to a value \f$ \le 0.75 \cdot F_s \f$, so any calls to @ref hackrf_set_baseband_filter_bandwidth should only be made after this.
 * 
 * @param device device to configure
 * @param freq_hz sample rate frequency in Hz. Should be in the range 2-20MHz
 * @return @ref HACKRF_SUCCESS on success or @ref hackrf_error variant
 * @ingroup configuration
 */
extern ADDAPI int ADDCALL hackrf_set_sample_rate(
	hackrf_device* device,
	const double freq_hz);

/**
 * Set the center frequency
 * 
 * Simple (auto) tuning via specifying a center frequency in Hz
 * 
 * This setting is not exact and depends on the PLL settings. Exact resolution is not determined, but the actual tuned frequency will be quariable in the future.
 * 
 * @param device device to tune
 * @param freq_hz center frequency in Hz. Defaults to 900MHz. Should be in range 1-6000MHz, but 0-7250MHz is possible. The resolution is ~50Hz, I could not find the exact number.
 * @return @ref HACKRF_SUCCESS on success or @ref hackrf_error variant
 * @ingroup configuration
 */
extern ADDAPI int ADDCALL hackrf_set_freq(hackrf_device* device, const uint64_t freq_hz);


/**
 * Set baseband filter bandwidth
 * 
 * Possible values: 1.75, 2.5, 3.5, 5, 5.5, 6, 7, 8, 9, 10, 12, 14, 15, 20, 24, 28MHz, default \f$ \le 0.75 \cdot F_s \f$
 * The functions @ref hackrf_compute_baseband_filter_bw and @ref hackrf_compute_baseband_filter_bw_round_down_lt can be used to get a valid value nearest to a given value.
 * 
 * Setting the sample rate causes the filter bandwidth to be (re)set to its default \f$ \le 0.75 \cdot F_s \f$ value, so setting sample rate should be done before setting filter bandwidth.
 * 
 * @param device device to configure
 * @param bandwidth_hz baseband filter bandwidth in Hz
 * @return @ref HACKRF_SUCCESS on success or @ref hackrf_error variant
 * @ingroup configuration
 */
extern ADDAPI int ADDCALL hackrf_set_baseband_filter_bandwidth(
	hackrf_device* device,
	const uint32_t bandwidth_hz);
```
