int pinLed[3] = {2, 4, 6}; // Déclaration du tableau

void setup() 
{
  //Boucle d'initialisation des modes et mise à 0V
  for (int i=0; i<3; i++) //i va nous servir à parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(pinLed[i], LOW); //l'une après l'autre
  }
}

void loop() //pausepause
{
  for (int i = 0; i < 3; i++)
  {
    //allumage des trois LED durant 1 seconde
    digitalWrite(pinLed[i], HIGH);
  }
  delay(1000);
  //on les éteint toutes brièvement
  digitalWrite(pinLed[0], LOW);
  digitalWrite(pinLed[1], LOW);
  digitalWrite(pinLed[2], LOW);
  delay(100);

  //Boucle de la variable temps qui diminue
  for (int temps=1000; temps>=200; temps-=200)
  {
    //Les 3 LED sont éteintes
    for (int i = 0; i < 3; i++)
    {
      //les trois lEDs sont éteintes
      digitalWrite(pinLed[i],HIGH); //Allumage de la lED n°i
      delay(temps); //pendant la valeur de temps
      digitalWrite(pinLed[i],LOW); //on éteint la lED
      delay(100); //cours délai, tout est éteint
    }
    //La boucle reprend
  }
  //retour au début de la loop();
}
