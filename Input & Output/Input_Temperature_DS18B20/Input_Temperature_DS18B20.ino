#include <OneWire.h>
#include <DallasTemperature.h>

// sensor pin to Arduino digitalPin to 2  
#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(void)
{
  Serial.begin(9600);
  Serial.println("Temperature Sensor");
  // 初始化 
  sensors.begin();
}

void loop(void)
{
  sensors.requestTemperatures();
  Serial.println(sensors.getTempCByIndex(0));
  delay(500);
}
