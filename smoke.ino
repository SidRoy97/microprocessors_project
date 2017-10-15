int smoke = A5;
void setup() {
  pinMode(smoke, INPUT);
  Serial.begin(9600);
}

void loop() {
   int analogSensor = analogRead(smoke );
  
  Serial.print("Pin A0: ");
  if(analogSensor > 600){
    Serial.println(analogSensor);
    delay(500);
  }

}

