 int sensorPin =A0;
 int digitalvalue=0;

 void setup(){
  Serial.begin(9600);
  
 }
 void loop(){
  digitalvalue =analogRead(sensorPin);
  Serial.print("digital value =");
    Serial.println(digitalvalue);
  delay(1000);
 }
 
