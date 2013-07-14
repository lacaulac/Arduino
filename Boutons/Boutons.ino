int pinA;//Déclaration de la variable pour le pin 2
int pinB;//Déclaration de la variable pour le pin 3

void setup()//Configuration du programme
{
  Serial.begin(9600);//Démarrage de l'interface série
  pinMode(2, INPUT);//Déclaration du pin 2 en entrée
  pinMode(3, INPUT);//Déclaration du pin 3 en entrée
}
void loop()//Boucle du programme
{
  pinA = digitalRead(2);//Lecture de l'état du pin 2
  pinB = digitalRead(3);//Lecture de l'état du pin 3
  if(pinA == HIGH)//Si on utilise le bouton associé au pin 2
  {
    Serial.println("Le bouton A est utilisé!");//Affichage de l'information
  }
  if(pinB == HIGH)//Si on utilise le bouton associé au pin 2
  {
    Serial.println("Le bouton B est utilisé!");//Affichage de l'information
  }
}
