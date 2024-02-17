Site officiel hp:
https://www.hp.com/fr-fr/shop/product.aspx?id=391r4aa&opt=abb&sel=acc
à priori on est sur du 2.4GHz

Fréquence émission: voir screen

Comment isoler la souris 
> lsusb
> Bus 001 Device 005: ID 03f0:2141 HP, Inc HP Wireless Mouse 

filtre wireshark
usb.dst == "1.5.1" || usb.src == "1.5.1"

le brouillage ne marche pas a voir pourquoi? certainement mauvais paramettre

https://www.bastille.net/research/vulnerabilities/mousejack/technical-details

Experience a verifier:
Image partie de gauche le maintient de la connection
montrer que si on retire le periphérique usb la souris tique plus lentement
a droite le signal de la sourris montrer que si on bouge il y a reaction


Test de l'attaque play and replay 
hackrf_transfer -s 2 -f 433910000 -r open 
                  20000000     2404000000

hackrf_transfer -s 2 -f 433910000 -t open -a 1 -x 24

 -s : précise le taux d'echantillons en MHz
 -f : précise la fréquence exacte enregistrée ou diffusée
 -r : Nom du fichier ou sera stocké notre signal 
 -t : Nom du fichier ou sera lu notre signal (afin de le retransmettre)
 -a : Amplifie le signal
 -x : le gain entre 0 et 47 dB (en Décibel)


