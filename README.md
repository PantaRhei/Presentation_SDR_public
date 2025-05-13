
# Présentation du Software Defined Radio – Sécurimag + ressources personnelle

Ce dépôt contient le contenu, les démonstrations et les supports associés à une présentation d'introduction à la **Software Defined Radio (SDR)**, 
orientée vers la pratique, l’expérimentation, et la rétro-ingénierie des signaux. Le plan de la présentation orginal est dans le fichier `plan-presentation.md`

Note : ce dépôt est enrichi progressivement.

---

## Objectifs

- Présenter les bases de la SDR : matériel, logiciels, fréquence, modulation
- Démontrer des cas concrets de réception, décodage et visualisation de signaux
- Exposer quelques pistes d’expérimentation avancée : émission, jamming, replay, ...
- Fournir un ensemble de ressources techniques centralisées

---

## Théorie

Des rappels théoriques sur les principaux types de modulation sont disponibles dans le fichier `note.md`.


---

## Matériel utilisé (lors de la présentation)

* HackRF One
* Raspberry Pi
* Radio FM classique

Détails complets dans `mon-materiel.md`

---

## Logiciels utilisés

* **rtl\_433** – Décodage de capteurs 433 MHz
* **GQRX**, **CubicSDR** – Réception FM/AM et analyse spectrale
* **GNU Radio** – Conception de flux de traitement SDR, émission FM
* **URH** – Rétro-ingénierie de protocoles simples
* **Artemis**, **DragonOS** – Outils complémentaires



---

## Démonstrations prévues

* Réception de capteurs en 433 MHz
* Visualisation de signaux FM / AM / souris sans fil
* Emission FM avec GNU Radio et HackRF One
* Observation de trames Wi-Fi
* Introduction à l’analyse de signal et à la reconnaissance via waterfall

---

## Licence

Ce dépôt est fourni à titre pédagogique.
L’usage de certaines démonstrations (émission, jamming, replay) est soumis à la réglementation locale.
Utilisation à vos risques et sous votre entière responsabilité.

---

## Auteur

Présenté dans le cadre d’une session technique par un membre de **Sécurimag**.


