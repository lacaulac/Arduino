int frequency = 0;
int value = 0;
int pinOut = 12;
void setup()
{
  Serial.begin(9600);
  pinMode(pinOut, OUTPUT);
}
void loop()
{
  value = analogRead(0);
  frequency = map(value, 50, 1023, 10000, 1);
  Serial.print("Frequence:");
  Serial.println(frequency);
  Serial.print("Valeur:");
  Serial.println(value);
  tone(pinOut, frequency);
}
