/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led_V = 12;
int led_R = 11;
int frequence = 250;
int i = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led_V, OUTPUT);     
  pinMode(led_R, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led_V, HIGH);
  delay(frequence);
  digitalWrite(led_V, LOW);
  delay(frequence);
  while(i < 3)
  {
    digitalWrite(led_R, HIGH);
    delay(frequence);
    digitalWrite(led_R, LOW);
    delay(frequence);
    i++;
  }
  i = 0;
}
