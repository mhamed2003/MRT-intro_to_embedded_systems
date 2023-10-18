int sensorPin = A0;   // select the input pin for the potentiometer
int buzzer = 11;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {

  pinMode(buzzer, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
if (sensorValue==3){

  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite( buzzer, LOW);
  delay(10000);
} 
else{
digitalWrite( buzzer, LOW);
}
}