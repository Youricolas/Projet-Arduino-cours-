#include <Servo.h> //on importe la bibliothèque Servo
int pinServo=8; // variable pour stocker le pin pour la commande
Servo leServo; // on définit un objet Servo nommé leServo
void setup() {
  leServo.attach(pinServo); // on relie l'objet au pin de commande
  pinMode(13,OUTPUT); //pin 13 en mode OUTPUT
}

void loop() {
  leServo.write(0); // on dit à l'objet de mettre le servo à 0°
  delay(1000);
  leServo.write(179); // position à 179°, 180° est à éviter
  delay(1000);
}
