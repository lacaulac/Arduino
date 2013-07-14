int buttonPin = 3;

// la fonction setup initialise la communication série 
// et une broche utilisée avec un bouton poussoir

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(4, OUTPUT);
}

// la fonction loop teste l'état du bouton à chaque passage 
// et envoie au PC une lettre H si il est appuyé, L sinon. 

void loop()
{
  digitalWrite(13, LOW);
  delay(1000);
  if (digitalRead(buttonPin) == HIGH){
  digitalWrite(13, HIGH);}

  delay(1000);
}

