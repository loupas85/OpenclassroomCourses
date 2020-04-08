int pinLed[5]={2,4,6,8,10}; //tableau renseignant chaque liaison de pin

//tableau a double entrée listant l'etat (booleen : 1 allumé, 0 eteint)
boolean affichage[25][5]={
  0,0,0,0,0,
  0,0,0,0,1,
  0,0,0,1,0,
  0,0,1,0,0,
  0,1,0,0,0,
  1,0,0,0,0,
  0,0,0,0,0,
  1,0,0,0,0,
  0,1,0,0,0,
  0,0,1,0,0,
  0,0,0,1,0,
  0,0,0,0,1,
  0,0,0,0,0,
  1,1,1,1,1,
  1,1,1,1,0,
  1,1,1,0,0,
  1,1,0,0,0,
  1,0,0,0,0,
  0,0,0,0,0,
  1,1,1,1,1,
  0,1,1,1,1,
  0,0,1,1,1,
  0,0,0,1,1,
  0,0,0,0,1,
  0,0,0,0,0,
};

void setup() 
{
  for (int i=0; i<5; i++){
    pinMode(pinLed[i],OUTPUT);
    digitalWrite(pinLed[i],LOW);
  }
}

void loop() 
{

  for (int i=0; i<25; i++) //boucle de séquence d'affichage
  {
    for (int p=0; p<5; p++) //boucle pour chaque pin
    {
      boolean etat=affichage[i][p]; //on va chercher l'etat pour le pin
      digitalWrite(pinLed[p],etat); //on met le pin concerné a l'etat
    }
    //tout les pin sont dans l'etat de la séquence en cours
    delay(300);//petite pause
    //on passe a la sequence suivante
  }
  //fin des sequences on repart au debut de la loop
}
