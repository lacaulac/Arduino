int x = 0;
int y = 0;
int z = 0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  x = analogRead(0);
  y = analogRead(1);
  z = analogRead(2);
  Serial.print("X: ");
  Serial.println(x);
  Serial.print("Y: ");
  Serial.println(y);
  Serial.print("Z: ");
  Serial.println(z);
  Serial.println("");
  delay(1000);
}
