void setup() 
{
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  if(digitalRead(0)==LOW)
  {
    digitalWrite(2,HIGH);
  } 
  else
  {
    digitalWrite(2,LOW);
  }
  if(digitalRead(1)==LOW)
  {
    digitalWrite(3,HIGH);
  } 
  else
  {
    digitalWrite(3,LOW);
  }
}