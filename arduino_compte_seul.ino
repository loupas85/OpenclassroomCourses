int numeroPin; //variable pour le pin utilisé

void setup() 
{
  numeroPin=13;
  pinMode(numeroPin,OUTPUT);
  Serial.begin(9600);
  Serial.println("*** Début du programme ***");

 for (int compteur=1;compteur<=20;compteur ++)
   {
     Serial.println(compteur); //Affiche la valeur de compteur

     //boucle de clignottement
     //compteur sert de limite à la boucle
     //donc le nombre de clignottement augmente à chaque tour
     for (int nombreClignote=0;nombreClignote<compteur;nombreClignote++) // ++ c'est comme écrire +1
     {
       //allume
       digitalWrite(numeroPin,HIGH);
       delay(100); //Temps d'attente delay
       //eteint
       digitalWrite(numeroPin,LOW);
       delay(100);
     }
     delay(1000);
   }
  Serial.println("*** Ayé ! ***");
}

void loop() 
{
    
}
