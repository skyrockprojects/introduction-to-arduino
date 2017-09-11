// let Arduino knows what's the name and where it pin:
int led = 9; // 9 refers to input pin 9    

// the setup routine runs once when you press reset:    
void setup() {
  // let Arduino knows to initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  // opens serial port, sets data rate to 9600 bps
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  //short
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for 0.5 second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // wait for 0.5 second
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for 0.5 second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500); 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for 0.5 second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500); 
  //long
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);   
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);    
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  
   //short
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500); 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500); 

}  
