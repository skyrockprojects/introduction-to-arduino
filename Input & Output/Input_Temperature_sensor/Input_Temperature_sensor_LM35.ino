int potPin = 0; 
int val;
 int dat;

void setup(){
Serial.begin(9600);
}


void loop(){
   val=analogRead(0);
   dat=(125*val)>>8;   // 125/2^8 = 125/256=0.4882812

  Serial.print("Celsius Temperature:");  
  Serial.print(dat);          
  Serial.println("C");    
  delay(500);             
}
