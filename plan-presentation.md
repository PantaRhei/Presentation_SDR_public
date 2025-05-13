# Présentation de la SDR

## Introduction
- Présentation rapide de la SDR (Software Defined Radio)
- Diapositive : plages de fréquences utilisées par les appareils courants (Wi-Fi, radio, capteurs météo, etc.)
- En parallèle : lancement de `rtl_433` (le temps qu’un signal apparaisse)

---

## Démo : RTL_433

- Affichage en direct des capteurs détectés
- Montrer les champs décodés (température, humidité, ID, etc.)
- Lien avec la documentation d’un protocole (choisi à l’avance)

---

## Réception de radio FM

- Explication rapide :
  - FM = Frequency Modulation
  - AM = Amplitude Modulation
- Affichage de la **waterfall** sur une fréquence FM
- Explorer d’autres fréquences (ex : 433 MHz)
- Si possible: faire le lien entre un signal détecté par `rtl_433` et son affichage dans la waterfall
- Présentation des logiciels:
  - CubicSDR
  - GQRX
  - SDR# (Windows)
  - Airspy
  - AngelSDR
  - etc.
- La radio sur plusieur OS: Linux / macOS / Windows

---

## Réception de radio AM

- Essayer de capter l’ATIS du Versoud (selon conditions)
- Sinon : écouter une radio AM audible (ondes courtes)

---

## Émission en FM (HackRF One)

- Rechercher une fréquence libre
- Émettre un court message audio
- GNU Radio :
  - Bloc de modulation FM
  - Génération automatique de code Python
- Démo : créer un simple flux avec quelques blocs

### Variante Raspberry Pi

- Démonstration que le Raspberry Pi peut émettre en FM (fil d’antenne)
- Préciser les limitations et usages expérimentaux (rappel à la lois)

---

## Attaque Play & Replay

- Démonstration des signaux enregistrés
- Ouverture des fichiers avec Audacity + visualisation du signal
- Explication de la mise en place de l'experience

---

## Analyse de souris sans fil

- Affichage waterfall d’une souris sans fil (Bluetooth)
- Observation de la connexion + ligne de trames de données
- Démo :
  - Débrancher la souris ou l’émetteur
  - Rebrancher + bouger la souris => visualisation des trames actives

---

## Code du jammer Wi-Fi

- Présenter le diagramme de blocs / code utilisé (soft GNU radio)
- Expliquer pourquoi les résultats sont faibles :
  - Puissance d’émission limitée
- Observation possible : trames Wi-Fi visibles dans la waterfall (2.4 GHz)

---

## Artemis & reconnaissance de signaux

- Faire écouter le son d'un signal avec Artemis (ex: Wi-Fi)
- Évoquer l’idée de créer un programme de reconnaissance à partir :
  - Du spectre audio
  - De la waterfall (analyse visuelle / apprentissage)

---

## Dragon OS

- Présentation rapide de DragonOS (distro SDR clé en main)
- Lancement en VM
- Présenter les outils préinstallés

---

## Ressources utiles

- Sites, chaînes YouTube, GitHub, distributions, etc.
- Renvoi vers le fichier `ressources.md` du dépôt

