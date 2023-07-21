

void setup() {
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(A8,OUTPUT);

}
void loop() {
   digitalWrite(2, HIGH);
   delay(100);
   digitalWrite(3, HIGH);
   analogWrite(A8,HIGH);
    delay(100);
   digitalWrite(2, LOW);
   delay(100);
   digitalWrite(3, LOW);
  delay(100);
  
}
