
# Utilisation de la bibliothèque libhackrf

La bibliothèque **libhackrf** permet de contrôler un HackRF One en C/C++ pour recevoir ou transmettre des signaux I/Q bruts.
Cette section propose un exemple minimal de compilation, quelques fonctions clés, et les références utiles issues de la documentation.

---

## Installation

Sur une distribution Debian/Ubuntu :

```bash
sudo apt install libhackrf-dev
````

---

## Compilation d’un programme simple

Exemple avec un fichier `main.c` :

```bash
gcc -o main main.c -lhackrf
```

Le binaire `main` est alors exécutable avec accès aux fonctions de la bibliothèque.

---

## Exemple d’utilisation brute – Réception

La lib de libhackrf repose sur un modèle **asynchrone** : le HackRF remplit un tampon, et une fonction de **callback** est appelée dès que celui-ci est plein.

### Prototype du callback de réception

```c
int rx_callback(hackrf_transfer* transfer) {
    // Les données I/Q brutes sont accessibles via transfer->buffer
    // Exemple : traitement, stockage, visualisation...
    return 0; // 0 = continuer, -1 = arrêter
}
```

### Structure utilisée : `hackrf_transfer`

```c
typedef struct {
    hackrf_device* device;
    uint8_t* buffer;
    int buffer_length;
    int valid_length;
    void* rx_ctx;
    void* tx_ctx;
} hackrf_transfer;
```

* `buffer` : contient les échantillons I/Q interlacés (8 bits, non signés)
* `valid_length` : nombre de bytes valides
* `rx_ctx` : pointeur utilisateur si besoin de contexte partagé
* Cette structure est transmise automatiquement au callback par la lib.

---

## Fonctions principales

### Démarrer la réception

```c
int hackrf_start_rx(hackrf_device* device, hackrf_sample_block_cb_fn callback, void* rx_ctx);
```

### Arrêter la réception

```c
int hackrf_stop_rx(hackrf_device* device);
```

---

## Configuration de l'appareil

### Fréquence centrale

```c
int hackrf_set_freq(hackrf_device* device, uint64_t freq_hz);
```

---

### Taux d’échantillonnage

```c
int hackrf_set_sample_rate(hackrf_device* device, double freq_hz);
```

> Doit être compris entre 2 et 20 MHz. Valeur par défaut : 10 MHz.

---

### Filtrage (bande passante)

```c
int hackrf_set_baseband_filter_bandwidth(hackrf_device* device, uint32_t bandwidth_hz);
```

> Valeurs acceptées : 1.75, 2.5, 3.5, 5, 6, 7, ..., 28 MHz
> Par défaut : \~0.75 × taux d’échantillonnage


---

## Références

* [Documentation officielle HackRF](https://github.com/greatscottgadgets/hackrf/wiki)
* [libhackrf GitHub](https://github.com/greatscottgadgets/hackrf/tree/master/host/libhackrf)


