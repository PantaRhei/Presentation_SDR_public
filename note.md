
# Outils SDR – Notes et Logiciel

---

# Modulations – Principaux types rencontrés en SDR

---

## Analogiques

- **FM (Frequency Modulation)**
  La fréquence du signal porteur varie en fonction de l'amplitude du signal audio. 
  Utilisation typique : radio FM, talkie-walkie, communications maritimes, PMR.

- **NFM (Narrowband FM)**
  Variante étroite de la FM, avec moins de bande passante (12.5 kHz au lieu de 200 kHz).
  Utilisation : talkie-walkies PMR446, services de sécurité, transmissions vocales de faible qualité.

- **AM (Amplitude Modulation)**
  L'amplitude du signal porteur varie selon le signal audio.
  Utilisation : radio AM, communications aéronautiques (VHF aérien), ondes courtes.

- **SSB (Single Side Band)**
  Variante de l’AM où seule une bande latérale (USB ou LSB) est transmise.
  Utilisation : radio amateur, HF longue portée.

---

## Numériques

- **ASK (Amplitude Shift Keying)**
  Modulation d’amplitude numérique (0 = basse amplitude, 1 = haute amplitude).
  Utilisation : télécommandes, RFID basiques.

- **FSK (Frequency Shift Keying)**
  La fréquence varie entre deux valeurs selon les bits transmis.
  Utilisation : signaux 433 MHz, téléinformation, modems, pagers.

- **GFSK (Gaussian FSK)**
  FSK filtré pour réduire la largeur de bande.
  Utilisation : Bluetooth classique.

- **PSK (Phase Shift Keying)**
  Modulation par changement de phase du signal porteur.
  Utilisation : Wi-Fi, ZigBee, DVB-S.

- **QAM (Quadrature Amplitude Modulation)**
  Combine modulation d’amplitude et de phase pour transmettre plusieurs bits par symbole.
  Utilisation : DVB-T, LTE, Wi-Fi, câble numérique.

---

## I/Q – Données brutes

- **I/Q (In-phase / Quadrature)**
  Représente les composantes en phase et en quadrature d’un signal.
  Utilisé dans toutes les chaînes de traitement SDR.
  Les signaux I/Q ne sont pas une modulation, mais une **représentation** numérique permettant d'analyser ou de reconstruire n'importe quel type de modulation.

---

## Source
- [https://herdaradio.com/fr/blog/radioknowledge/modulation-techniques-unveiled/?srsltid=AfmBOoq9Ly0GRSr51Opph_KDKCzQPsbpytkiNrvytF0XFJ98QkVGdsxU](Démystifier la modulation : les types d'émissions radio expliqués)



