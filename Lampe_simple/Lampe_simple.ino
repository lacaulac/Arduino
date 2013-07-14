int pinA;
int pinB;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  pinA = digitalRead(2);
  if(pinA == HIGH)
  {
    digitalWrite(3, HIGH);
  }
  if(pinA == LOW)
  {
    digitalWrite(3, LOW);
  }
}
