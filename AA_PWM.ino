double channel=2;
int relay_pin=7;
void setup() {
  pinMode(2,INPUT);
  pinMode(relay_pin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  channel=pulseIn(2,HIGH);
  Serial.println(channel);
  if(channel<1100){
    digitalWrite(relay_pin,HIGH);
    delay(500);
  }
  else{
    digitalWrite(relay_pin,LOW);
    delay(500);
  }
}