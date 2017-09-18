#include <LiquidCrystal.h>

int potPin = 0; 
int val;
int dat;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(potPin, INPUT);
  Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
   val=analogRead(0);
   dat=(125*val)>>8;   // 125/2^8 = 125/256=0.4882812
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print("degrees C:");
  lcd.print(dat);
  delay(1000);
}
