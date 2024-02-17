# Choix de la fréquence
- 108 MHz car j'ai l'impression qu'il n'y a personne dans ma localisation géographique

# fm_transmitter
- `fm_transmitter.grc` => permet d'émettre un fichier audio en fm sur une fréquence

Pour lancer le programme:
```bash
gnuradio-companion fm_transmitter.grc
```
ATTENTION: bien rechoisir le fichier audio avant de relancer.

# Le block WBFM Transmit
Permet de moduler le fichier audio en FM (modulation de fréquence).
Doc:
- https://wiki.gnuradio.org/index.php/WBFM_Transmit

# fm_transmitter_without_transmitter
Ce programme montre qu'il est possible de quand même faire des choses sans devoir à emettre.
Il y a deux graphique, le premiers apres le block de modulation du signal.
Et les deuxième le final. 

