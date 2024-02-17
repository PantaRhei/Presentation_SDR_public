# CubicSDR

## Modulation
- FM => modulation par fréquence, typiquement la radio
- AM => Modulation par amplitude, typiquement les fréquences radio aéraunautique
- I/Q => signal sans modulation. 

## Enregistrement
Pour enregistrer il faut bien penser à setup un dossier de sortie.

## Ressource
Documentation:
- https://cubicsdr.readthedocs.io/en/latest/index.html#
Github:
- https://github.com/cjcliffe/CubicSDR?tab=readme-ov-file


# GQRX
Il propose un peu les mêmes options que CubicSDR


# Gnuradio
## Run gnuradio-companion + utilisation
```bash
gnuradio-companion fm_receiver.grc 
```

Pour lancer soit F6 ou `run > excute`

L'option `run > generate` (ou F5) permet de generer le code python.
Gnuradio va convertir les blocks dessinés en code python. Gnuradio utilise
la librerie QT. Possiblilité de generer en C++ (voir le bloc option).

Quand on double clic sur un bloc, gnuradio ouvre une fenêtre avec en general plusieurs onglet.
Le dernier onglet est lié à la documentation du bloc


## Installation
Lien fait le wiki:
- https://wiki.gnuradio.org/index.php?title=InstallingGR



## Documentation
La documentation général est disponible sur ce site:
- https://wiki.gnuradio.org/index.php?title=Main_Page

Chose très interessante, souvent sur le wiki un exemple est 
proposé. Ici le lien pour le filtre `Low pass filtre`:
- https://wiki.gnuradio.org/index.php/Low_Pass_Filter


# URH
Le logiciel permet de démoduler "facilement" des signaux.
(peut être comparée avec hydra pour de la rétro-ingénerie de code (après la comparaison avec
des pincette))
Github:
- https://github.com/jopohl/urh