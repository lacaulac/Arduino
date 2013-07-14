int i = 1;
int pinAnalog = 11;
int delayed = 0;
int min = 1;
int max = 30;
void setup()
{

}
void loop()
{
  /*
  
   */
  while(i < 255)
  {
    delayed = analogRead(0);
    delayed = map(delayed, 525, 626, 75, 1);
    /*delayed = analogRead(0);
     delayed = map(delayed, 488, 1023, 1, 100);*/
    analogWrite(pinAnalog, i);
    i++;
    delay(delayed);
  }
  while(i > 1)
  {
    delayed = analogRead(0);
    delayed = map(delayed, 525, 626, 75, 1);
    /*delayed = analogRead(0);
     delayed = map(delayed, 488, 1023, 1, 100);*/
    analogWrite(pinAnalog, i);
    i--;
    delay(delayed);
  }
}

