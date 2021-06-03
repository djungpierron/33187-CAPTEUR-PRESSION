# 33187-CAPTEUR DE PRESSION POUR ARDUINO

CAPTEUR PRESSION POUR ARDUINO [33187](https://www.pierron.fr/capteur-de-pression-pour-arduinotm.html)

Capteur de pression absolue compatible Arduino™.

- Tension d’alimentation maximale: 5v DC
- Plage d’écoulement de l’eau : 0,3-6 L/min
- Diamètre intérieur: 4 mm
- Diamètre extérieur: 7 mm
- Taille de la buse Standard: Type 18 (1/8 " / 3.175mm) 
- Pression d’eau d’épreuve: <0,8 MPa
- Courant de fonctionnement: 15 mA (DC 5V)
- Résistance d’isolation: >100 MΩ
- Précision : ±5 % 
- L’impulsion de sortie de haut niveau: >4.5 VCC (tension d’entrée CC 5 V)
- L’impulsion de sortie bas niveau: <0.5 VCC (tension d’entrée CC 5 V)
- Formule d’écoulement de l’eau: 1L = 5880 ondes carrées
- Plage d’humidité de travail: 35% ~ 90% HR (pas de gel)
- Plage de mesure : 0 à 200 kPa
- Résolution : 25 mV/kPa

![L-33187](/img/L-33187.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [NOTICE](https://github.com/pierron-asco-celda/33187-CAPTEUR-PRESSION/blob/main/src/Pierron-33187-Datasheet.pdf)


# Schémas :

![SCH-33187](/img/SCH-33187.JPG)
![BRD-33187](/img/BRD-33187.JPG)

# Exemples :

### mblock :
![P1-33187](/img/P1-33187.JPG)

### Arduino / C++ :
```cpp
#include <Arduino.h>
#include <SoftwareSerial.h>

const float GAIN = 248.9; // Ampli-op Gain 
const float SENSIBILITY = 0.1; //Sensibility of the sensor
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
  float v = analogRead(analogPin)*5.0 / 1023; // Volts
  return v / GAIN * 1000 / SENSIBILITY; // kPa
}
```
## À propos :

PIERRON ASCO-CELDA (https://www.pierron.fr).



 
