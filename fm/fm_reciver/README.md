# Écoute de la radio FM avec GNU Radio

Cette section présente une méthode pour écouter la radio FM à l'aide de **GNU Radio** et d’un **HackRF One**.

---

## Remarque générale

Bien que le **GNU Radio** permette d’écouter la bande FM, l’utilisation de logiciels comme **GQRX** ou **CubicSDR** reste plus simple, plus rapide à mettre en place, et bien plus intuitive pour un usage visuel immédiat.

---

## Fichier `fm_receiver.grc`

Le fichier `fm_receiver.grc` contient un diagramme GNU Radio prêt à l’emploi pour recevoir une station FM.


---

## Contenu du dossier

* `fm_receiver.grc` : diagramme GNU Radio configuré pour le HackRF One

---

## Utilisation

```bash
gnuradio-companion fm_receiver.grc
```
Puis exécuter avec F6 ou Run > Execute.
