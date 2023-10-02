////****    UART COMMUNICATION BETWEEN ARDUINO AND PIC MICROCONTRLLER    ****////

const int ledA=4;  
const int ledB=5;  
const int ledC=6;  
const int ledD=7;
void setup() 
{
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(ledC,OUTPUT);
  pinMode(ledD,OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  if (Serial.available()>0)
  {
    char rec=Serial.read();
    switch (rec)
    {
      case 0X41:
      digitalWrite(ledA, HIGH);
      delay(500);
      digitalWrite(ledA, LOW);
      break;
      case 0X42:
      digitalWrite(ledB, HIGH);
      delay(500);
      digitalWrite(ledB, LOW);
      break;
      case 0X43:
      digitalWrite(ledC, HIGH);
      delay(500);
      digitalWrite(ledC, LOW);
      break;
      case 0X44:
      digitalWrite(ledD, HIGH);
      delay(500);
      digitalWrite(ledD, LOW);
      break;
    }
  }
}
