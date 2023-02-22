 const int INPUT_BUTTON_PIN=2;
 void setup(){
  pinMode(INPUT_BUTTON_PIN,INPUT);
  Serial.begin(9600);
 }
 void loop(){
  int buttonval=digitalRead(INPUT_BUTTON_PIN);
  Serial.println(buttonval);
  delay(5);
 }
