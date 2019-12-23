/*
 * Measurement of 02 in air using sensor: https://www.seeedstudio.com/Grove-Oxygen-Sensor-ME2-O2-f20.html
 * 
 * CONNECTION
 *    Red     > 5V
 *    Black   > GND
 *    White   > Not used
 *    Yellow  > A0
 */

#include "Oxygen.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Calibration sensor...This needs one minute");
  O2_value();
  Serial.println("Finish Calibration");
}

void loop() {
  // put your main code here, to run repeatedly:
  float O2 = 0;
  O2 = O2_value();
  Serial.print("The percentage of oxygen is:");
  Serial.print(O2);
  Serial.println("%");
  delay(1000);
}

/**
 * If you want to see the Voltage representation
 */
void showVoltage(){
      float sensor_volt;
      float sensorValue;
  
      sensorValue = analogRead(A0);
      sensor_volt = sensorValue/1024*5.0;
  
      Serial.print("sensor_volt = ");
      Serial.print(sensor_volt);
      Serial.println("V");
      delay(1000);
}
