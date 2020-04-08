int affichageFait; //déclaration de la variable

void setup() 
{
  //initialisation de la communication
  Serial.begin(9600);
  affichageFait=0;//initialisation de la variable 
}

void loop() 
{
  if (affichageFait==0)
  {
    //Ce code n'est exécuté que si la condition est vérifiée
    Serial.println("Hello");
    delay(800);
    Serial.println("Arduino");
    delay(800);
    Serial.println("World !");
    delay(800);
    affichageFait=1; //on passe la variableà 1 pour ne plus exécuter le code
  }
}
