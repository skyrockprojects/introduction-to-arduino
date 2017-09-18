int potPin = 0; 
int val;
int dat;

void setup() {
  pinMode(potPin, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);

}

void loop() {
  val=analogRead(0);
  dat=(125*val)>>8;   // 125/2^8 = 125/256=0.4882812
  Serial.print("Celsius Temperature:");  
  Serial.print(dat);          
  Serial.println("C");  

  if (dat < 20) {
    for (int count = 0; count < 10; count++) {
      tone(8,1000);
      delay(50);
      tone(8,500);
      delay(50);
    }
    noTone(8);
    delay(2000);
  }

}
