# 33187 Capteur de pression pour ARDUINO

CAPTEUR PRESSION POUR ARDUINO [33187](https://www.pierron.fr/capteur-de-pression-pour-arduinotm.html)

Capteur de pression absolue compatible Arduino™.

- Tension d’alimentation : 5v DC
- Plage de mesure : 0 à 200 kPa
- Résolution : 25 mV/kPa

![L-33187](/img/L-33187.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [MPX2202](https://github.com/pierron-asco-celda/33187-CAPTEUR-PRESSION/blob/main/src/Pierron-33187-Datasheet.pdf)


# Schémas :

![SCH-33187](/img/SCH-33187.JPG)
![BRD-33187](/img/BRD-33187.JPG)

# Exemples :

### mblock :
![P1-33187](/img/P1-33187.JPG)

### Arduino / C++ :
```cpp
//baud rate 9600;*
#include <Arduino.h>
#include <SoftwareSerial.h>

const float GAIN = 248.9; 
const float SENSIBILITY = 0.1;
const int sensor_pin = A1;
 
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Pression :");
  Serial.print(getPression(sensor_pin));
  Serial.println(" kPa");
  delay(1000);
}

float getPression(int analogPin){
  float v = analogRead(analogPin)*5.0 / 1023; 
  return v / GAIN * 1000 / SENSIBILITY; 
}
```
## À propos :
<div style="text-align: justify">*Le débit en bauds est un taux de transfert de données en unités de bits par seconde (bps). Si le débit en bauds est de 9600, cela signifie que la possibilité d’envoyer des données est de 9600 bits en une seconde. 1 caractère est identique à 1 octet.</div>
<br>
PIERRON ASCO-CELDA (https://www.pierron.fr).



 
