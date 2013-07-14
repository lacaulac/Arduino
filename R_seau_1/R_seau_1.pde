int buttonPin = 0; // déclaration d'une variable globale 
int buttonpin = 1;

void setup() // fonction setup - début de l'exécution du programme
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(buttonpin, OUTPUT);
}

void loop() // fonction loop - est exécutée en boucle 
               // une fois que la fonction setup a été exécutée
{
  // ...
}
