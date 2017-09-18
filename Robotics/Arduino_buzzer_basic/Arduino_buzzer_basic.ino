// let Arduino knows what's the name and where it pin:
int speakerPin = 12; // 12 refers to input pin 12    

// the setup routine runs once when you press reset:    
void setup() {
  // let Arduino knows to initialize the digital pin as an output.
  pinMode(speakerPin, OUTPUT);
  // opens serial port, sets data rate to 9600 bps
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  tone(speakerPin,880);
  delay(1000);               // wait for a second

}    
