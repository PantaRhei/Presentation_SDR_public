# Mon matériel SDR

Ce fichier recense les principales antennes et équipements SDR que j’utilise.

---

## Antennes

### ANT500

- **Fabricant :** Great Scott Gadgets 
- **Lien :** [https://greatscottgadgets.com/ant500/](https://greatscottgadgets.com/ant500/)
- **Plage de fréquences :** 75 MHz à 1 GHz 
- **Longueur ajustable :** 20 cm à 88 cm 
- **Impédance :** 50 Ohms 
- **Connecteur :** SMA mâle 
- **Type :** Télescopique, tige en acier inoxydable 
- **Particularités :** Arbre rotatif, coude orientable


---

### Antenne 4G/3G/GSM avec connecteur SMA

- **Plages de fréquences :**
  - 698–960 MHz
  - 1710–2170 MHz
  - 2500–2700 MHz
- **Compatibilité :**
  - GSM / GPRS / EDGE : 850 / 900 / 1800 / 1900 MHz
  - 3G / UMTS / HSDPA / HSUPA : 900 / 2100 MHz
  - CDMA : 1900 MHz
  - 4G : 2600 MHz
  - WiFi : 2.4 GHz
- **Gain :** 3 dBi 
- **VSWR :** ≤ 2 
- **Connecteur :** SMA mâle 
- **Impédance :** 50 Ohms 
- **Puissance max :** 50 W 
- **Polarisation :** Verticale 
- **Longueur :** 16 cm 
- **Poids :** 30 g 

---

### Antennes fournies avec le RTL-SDR

#### Antenne télescopique (bâton magnétique)

- **Type :** Télescopique avec base magnétique 
- **Longueur :** Ajustable jusqu’à ~1 m
- **Usage**: Ecoute de la HF

#### Antenne fouet courte (bande large)

- **Type :** Fouet rigide
- **Longueur :** ~10 cm
- **Usage :** 433 MHz, écoute PMR, GSM

---

## Récepteurs et émetteurs

### HackRF One

- **Fabricant :** Great Scott Gadgets
- **Lien :** [https://greatscottgadgets.com/hackrf/one/](https://greatscottgadgets.com/hackrf/one/)
- **Type :** Transceiver SDR (émission + réception) 
- **Plage de fréquences :** 1 MHz à 6 GHz
- **Échantillonnage :** 8 bits I/Q
- **Taux d’échantillonnage max :** 20 MSPS
- **Largeur de bande instantanée :** jusqu’à 20 MHz
- **Impédance :** 50 Ohms
- **Connecteurs :** SMA femelle (TX/RX), Micro-USB 2.0
- **Alimentation antenne (bias-T) :** activable via logiciel 
- **Boîtier :** Plastique
- **Logiciels utilisés :** GNURadio, GQRX, URH, RTL-433
- **Usage :** Analyse de spectre, émission/répétition de signaux, play and replay, expérimentations protocoles sans fil, attaques actives/passives



### RTL-SDR V4

- **Type :** Récepteur SDR USB basé sur RTL2832U + R828D 
- **Fabricant :** RTL-SDR.com 
- **Version :** V4 
- **Plage de fréquences :** ~500 kHz à 1.766 GHz 
- **Connecteur antenne :** SMA femelle
- **Fréquence d’échantillonnage max :** 3.2 MSPS
- **Logiciels utilisés :** GQRX, GNURadio, URH, RTL-433

---

### Talkie-Walkie Motorola (x2)

- **Type :** PMR (Private Mobile Radio)
- **Bandes utilisées :** PMR446 MHz
- **Modulation :** NFM (Narrowband FM)
- **Nombre d’unités :** 2 
- **Canaux :** 16
- **Usage :** Communication courte portée, écoute et expérience avec le hackRF One

