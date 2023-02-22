int red=13;
int yellow=8;
int green=11;




void setup() {
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {
   digitalWrite(red, HIGH);
   delay(5000);
   digitalWrite(yellow, LOW);
   //delay(5000);
   digitalWrite(green, LOW);
   //delay(5000);

   digitalWrite(red, LOW);
   //delay(5000);
   digitalWrite(yellow, HIGH);
   delay(5000);
   digitalWrite(green, LOW);
   //delay(5000);

   digitalWrite(red, LOW);
   //delay(5000);
   digitalWrite(yellow, LOW);
   //delay(5000);
   digitalWrite(green, HIGH);
   delay(5000);
}
