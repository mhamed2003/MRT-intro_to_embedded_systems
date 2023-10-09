void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
                  // wait for a second
  digitalWrite(12, LOW);   // turn the LED off by making the voltage LOW
  delay(7000);  
  digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
    
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(11, LOW);   // turn the LED off by making the voltage LOW
  
  digitalWrite(11, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(10, LOW);   // turn the LED off by making the voltage LOW
   
  digitalWrite(10, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(9, LOW);   // turn the LED off by making the voltage LOW
  
  digitalWrite(9, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(8, LOW);   // turn the LED off by making the voltage LOW
  
  digitalWrite(8, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(7, LOW);   // turn the LED off by making the voltage LOW
   
  digitalWrite(7, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(6, LOW);   // turn the LED off by making the voltage LOW
   
  digitalWrite(6, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
   
  
}