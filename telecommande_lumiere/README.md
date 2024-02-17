# Télécommande de controle des lumières
Le signal a été capturer au centre de santé.


# Attaque de play and reply

je capture une séquence d'apel par exemple :
```bash
hackrf_transfer -s 2 -f 446000000 -r HackyWalkie
```
et la rediffuse
```bash
hackrf_transfer -s 2 -f 446000000 -t HackyWalkie -a 1 -x 24
```
```
 -s : précise le taux d'echantillons en MHz
 -f : précise la fréquence exacte enregistrée ou diffusée
 -r : Nom du fichier ou sera stocké notre signal 
 -t : Nom du fichier ou sera lu notre signal (afin de le retransmettre)
 -a : Amplifie le signal
 -x : le gain entre 0 et 47 dB (en Décibel)
```
Provient de ce github: https://github.com/PierreAdams/HackRF-One-French?tab=readme-ov-file#jamming-wifi--24ghz

# URH
Possibilité d'analyser le signal sur URH (je ne fait que citer le logiciel)