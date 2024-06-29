#define sensor 8
#define buzzer 9
int su;

void setup() {
pinMode(sensor, INPUT);
pinMode(buzzer, OUTPUT);


}

void loop() {
  su = digitalRead(sensor);
if(su == HIGH){
  tone(buzzer, 1000);
  delay(250);
  noTone(buzzer);
  delay(250);
}
else{
  noTone(buzzer);
}

}
