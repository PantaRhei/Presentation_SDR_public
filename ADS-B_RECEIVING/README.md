[wiki](https://en.wikipedia.org/wiki/Automatic_Dependent_Surveillance%E2%80%93Broadcast)

[sig_wiki](https://www.sigidwiki.com/wiki/ADS-B)
Description come to sigwiki:
> Automatic Dependent Surveillance-Broadcast (ADS-B) is used by aircraft as an alternative to secondary radar. It broadcasts GPS position (latitude, longitude), pressure altitude, callsign, as well as track and ground speed separated into messages carrying 10 bytes of data each. ADS-B uses PPM to transmit data.

> There are two types of ADS-B:
 - one that transmits at 1090 MHz using the mode-S extended squitter (downlink format 17) of the SSR transponder, with about 2 MHz of bandwidth; (Worldwide)
 - one that transmits at 978 MHz (UAT, Universal Access Transceiver), using a larger bandwidth of about 1.3 MHz and also transmitting weather data. (US Only)



Frequencie: 1090Mhz, 1030MHz, 978MHZ
Frequency: 978MHz-1090MHz

# dump1090
[fork git compatible with hackrf](https://github.com/esuldin/dump1090)
[Orignal git](https://github.com/MalcolmRobb/dump1090)*

## Run with hackrf
```bash
./dump1090 --interactive
```
+ TODO: test it, i'am not sure to see diff

Flag `--aggressive` and `--fix`:
> You may wish to also enable the --aggressive and --fix flags which will be able to decode more ADS-B packets at the expense of increased CPU usage. The aggressive mode enables aggressive error correction and is mainly useful for low air traffic areas as it may cause many false positives under high traffic conditions. 

## For hackrf one
--enable-amp             Enable HackRF RX/TX RF amplifier (default: off).
--enable-ant-power       Enable HackRF DC Antenna power - 3.5v (default: off).

./dump1090 --aggressive --fix --interactive --enable-amp --enable-ant-power