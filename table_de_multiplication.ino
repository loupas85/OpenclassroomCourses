int multiple; // Variable pour le nombre 7
boolean affiche; //Variable d'affichage

void setup() 
{
  affiche=true; //Initialisation à true
  multiple=7; //Initialisation à 7
  Serial.begin(9600); //Initialisation de l'affichage

  //Affichage de l'entête du programme
  Serial.println("***********************");
  Serial.println("Table de multiplication");
  Serial.print("La table de : "); //pas de retour à la ligne
  Serial.println(multiple); //Affichage de la variable de 7
  Serial.println(); //Saut de ligne
}

void loop() 
{
  if (affiche) //test si vrai
  {
    // boucle de progression pour la multiplication
    for (int t = 0; t < 15; t ++)
    {
      int resultat = multiple * t; //variable pour stocker le résultat

      //Affichage de la ligne
      Serial.print(t);
      Serial.print(" x ");
      Serial.print(multiple);
      Serial.print(" = ");
      Serial.println(resultat);
      delay(400);
    }
    Serial.println(); // Saut de ligne
    Serial.println("***********************");
    affiche=false; // Passage à false pour ne plus afficher
  }
}
