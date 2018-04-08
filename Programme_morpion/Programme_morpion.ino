#include <LiquidCrystal.h>
int Joueur1;
int Joueur2;
int Fin;
int Bouton1 = 1; //Le jeu est cosé de 9 bouton pour selectionner la case qu'on veut jouer
int Bouton2 = 2;
int Bouton3 = 3;
int Bouton4 = 4;
int Bouton5 = 5;
int Bouton6 = 6;
int Bouton7 = 7;
int Bouton8 = 8;
int Bouton9 = 9;
int Case 1; //La case passera à 1 lorsque le joueur aura appuyé sur le bouton correspondant
int Case 2;
int Case 3;
int Case 4;
int Case 5;
int Case 6;
int Case 7;
int Case 8;
int Case 9;

void setup() {
  lcd.begin(16,2);
  lcd.clear();
}
void loop() {
while ( Fin != 1 ){ //Boucle fin de partie
  while ( Joueur1 != 1 ) { //Boucle joueur numéro 1
lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Joueur 1"); //Affichage du joueur en jeu
if ( Bouton1 == HIGH ) { //Si bouton appuyé, alors case passe à 1 et sortie de boucle du joueur 1
Case 1 = 1;
Joueur1 = 1;
}
if ( Bouton2 == HIGH ) {
Case 2 = 1;
Joueur1 = 1;
}
if ( Bouton3 == HIGH ) {
Case 3 = 1;
Joueur1 = 1;
}
if ( Bouton4 == HIGH ) {
Case 4 = 1;
Joueur1 = 1;
}
if ( Bouton5 == HIGH ) {
Case 5 = 1;
Joueur1 = 1;
}
if ( Bouton6 == HIGH ) {
Case 6 = 1;
Joueur1 = 1;
}
if ( Bouton7 == HIGH ) {
Case 7 = 1;
Joueur1 = 1;
}
if ( Bouton8 == HIGH ) {
Case 8 = 1;
Joueur1 = 1;
}
if ( Bouton9 == HIGH ) {
Case 9 = 1;
Joueur1 = 1;
}
if ( Case 1 = 1, Case 2 = 1, Case 3 = 1) {
  Fin = 1;
  Joueur1 = 2;
  }
if ( Case 4 = 1, Case 5 = 1, Case 6 = 1) {
  Fin = 1;
  Joueur1 = 2;
  }
if ( Case 7 = 1, Case 8 = 1, Case 9 = 1) {
  Fin = 1;
  Joueur1 = 2;
  }
if ( Case 1 = 1, Case 5 = 1, Case 9 = 1) {
  Fin = 1;
  Joueur1 = 2;
  }
if ( Case 3 = 1, Case 5 = 1, Case 7 = 1) {
  Fin = 1;
  Joueur1 = 2;
  }
if ( Case 1 = 1, Case 4 = 1, Case 7 = 1) {
  Fin = 1;
  Joueur1 = 2;
  }
if ( Case 2 = 1, Case 5 = 1, Case 8 = 1) {
  Fin = 1;
  Joueur1 = 2;
  }
if ( Case 3 = 1, Case 6 = 1, Case 9 = 1) {
  Fin = 1;
  Joueur1 = 2;
  }
  }
while ( Joueur2 != 1 ) { //Boucle du joueur numéro 2
lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Joueur 2");
if ( Bouton1 == HIGH ) {
Case 1 = 2;
Joueur2 = 1;
}
if ( Bouton2 == HIGH ) {
Case 2 = 2;
Joueur2 = 1;
}
if ( Bouton3 == HIGH ) {
Case 3 = 2;
Joueur2 = 1;
}
if ( Bouton4 == HIGH ) {
Case 4 = 2;
Joueur2 = 1;
}
if ( Bouton5 == HIGH ) {
Case 5 = 2;
Joueur2 = 1;
}
if ( Bouton6 == HIGH ) {
Case 6 = 2;
Joueur2 = 1;
}
if ( Bouton7 == HIGH ) {
Case 7 = 2;
Joueur2 = 1;
}
if ( Bouton8 == HIGH ) {
Case 8 = 2;
Joueur2 = 1;
}
if ( Bouton9 == HIGH ) {
Case 9 = 2;
Joueur2 = 1;
}
if ( Case 1 = 2, Case 2 = 2, Case 3 = 2) {
  Fin = 1;
  Joueur1 = 2;
  }
if ( Case 4 = 2, Case 5 = 2, Case 6 = 2) {
  Fin = 1;
  Joueur2 = 2;
  }
if ( Case 7 = 2, Case 8 = 2, Case 9 = 2) {
  Fin = 1;
  Joueur2 = 2;
  }
if ( Case 1 = 2, Case 5 = 2, Case 9 = 2) {
  Fin = 1;
  Joueur2 = 2;
  }
if ( Case 3 = 2, Case 5 = 2, Case 7 = 2) {
  Fin = 1;
  Joueur2 = 2;
  }
if ( Case 1 = 2, Case 4 = 2, Case 7 = 2) {
  Fin = 1;
  Joueur2 = 2;
  }
if ( Case 2 = 2, Case 5 = 2, Case 8 = 2) {
  Fin = 1;
  Joueur2 = 2;
  }
if ( Case 3 = 2, Case 6 = 2, Case 9 = 2) {
  Fin = 1;
  Joueur2 = 2;
  }
  }
  }
lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" Fin de partie ! ");
if ( Joueur1 == 2 ) { //Si Joueur numéro 1 = 2 alors affichage du joueur  numéro 1 gagnant 
lcd.setCursor( 0, 1);
lcd.print (" Gagnant : Joueur 1 ");  
  }
if (Joueur2 == 2) { //Si Joueur numéro 2 = 2 alors affichage du joueur  numéro 2 gagnant 
lcd.setCursor( 0, 1);
lcd.print (" Gagnant : Joueur 2 ");  
  }
}

