int i=0;
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop()
{
  for(i=0;i<8;i++)
  {
    digitalWrite(i, HIGH);
    delay(250); // Wait for 250 millisecond(s)
    digitalWrite(i, LOW);
    delay(250); // Wait for 250 millisecond(s)
  }
  for(i=6;i>=1;i--)
  {
    digitalWrite(i, HIGH);
    delay(250); // Wait for 250 millisecond(s)
    digitalWrite(i, LOW);
    delay(250); // Wait for 250 millisecond(s)
  }
    
    
}