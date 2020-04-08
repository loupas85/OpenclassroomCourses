/*
 *********************** 
 Programme Blink Blink
 Auteurs Lou et Paul
 ***********************
*/

void setup() // boucle d'initialisation
{
  pinMode(13,OUTPUT); //connexion13 en mode envoi de courant
}

void loop() // boucle infinie
{
  digitalWrite(13,HIGH); //envoie de courant dans la connexion 13
  delay(1000); //attente d'une seconde
  digitalWrite(13,LOW); //arrêt du courant dans la connexion 13
  delay(1000); //attente d'une seconde
}
