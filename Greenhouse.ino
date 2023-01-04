/* https://docs.espressif.com/projects/esp-at/en/latest/esp32/AT_Command_Set/HTTP_AT_Commands.html#http-at */



/* List all wifi   ---> 'AT+CWLAP' */
/* Connect to Wifi ---> 'AT+CWJAP="TestingNetwork","tinkerbell"' */


#include <SoftwareSerial.h>

SoftwareSerial wifiSerial(7, 6);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  wifiSerial.begin(9600);
  // wifiSerial.print("AT+CWLAP");

  delay(10000);
  Serial.println("Starting");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    Serial.println("information");
    wifiSerial.println("AT+CWLAP");
    // wifiSerial.println("");
    while (Serial.available()) {
      Serial.read();
      // delay(3);
    }
    // Serial.TX
  }
  if (wifiSerial.available()) {
    while (wifiSerial.available()) {
      char c = wifiSerial.read();
      Serial.print(c);
    }
  }
}
