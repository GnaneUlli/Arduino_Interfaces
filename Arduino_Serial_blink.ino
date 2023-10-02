int s=6;
int x;
int led =7;
void setup() {
  Serial.begin(9600);
  pinMode(6,INPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  x=digitalRead(s);
  Serial.println(x);
  delay(1000);
  Serial.println("HI TO Arduino Due");
  delay(1000);
  if(x==0){
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    delay(1000);
  }
}
