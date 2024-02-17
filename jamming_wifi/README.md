# Wifi_jammer
```bash
gnuradio-companion wifi_jammer.grc 
```
Lors de l'excution une fenêtre s'ouvrira. En bas de cette dernière, il y a un curseur 
qui permet de choisir le channel de la wifi.

# Fait interessant.
Les routeurs peuvent changer de channel si le channel est saturé.

# Les channels 
Channels (size 22MHz):
- 1 => 2.412GHz
- 6 => 2.437GHz
- 11 => 2.462GHz

# La manipulation
La manipulation va être fait sur une arduino MKR WiFi 1010
Ref:
- https://store.arduino.cc/products/arduino-mkr-wifi-1010
On va essayer de saturer le recepteur/emeteur wifi de l'arduino
Pour cela, l'arduino scannera en boucle les wifi disponibles.
Le code est le code d'exemple proposer par arduino pour scanne 
le wifi.





# Brouillage wifi
- test sur mon routeurs avec un succès moyen (je penses que l'émission n'est pas assez forte),
- Attention beaucoup de routeurs sont en 5GHz, ici le brouillage se passe sur du 2.4GHz

