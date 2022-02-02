// i never finished coding this as I got covid...

#include "constants.h"
#include "music.h"
#include "reboot.h"


void setup(){
pinMode(rebootButton, INPUT_PULLUP);

pinMode(battery, INPUT);
analogReadResolution(12);
delay(1500);

Serial.begin(9600);
}

void loop() {
    if(digitalRead(rebootButton) == LOW){
        doReboot();
    }
    float battLevel = getInputVoltage_Divider();
    Serial.print("battery voltage is ");
    Serial.println(battLevel);
}

float getInputVoltage_Divider()
{
  int x = analogRead(battery);
  Serial.print("AnalogRead() = ");
  Serial.print(x);
  Serial.print("   ");
  float volt = (x/4095.0) * 3.4;

  Serial.print("Va = ");
  Serial.println(volt);

  return volt * (22000.0/10000.0);
}
