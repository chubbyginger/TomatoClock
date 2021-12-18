#include <SoftwareSerial.h>
#define BT_TX 7
#define BT_RX 8
#define BAUD 9600
SoftwareSerial btser(BT_TX, BT_RX);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  btser.begin(BAUD);
  Serial.println("CC2541-Test");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    btser.write(Serial.read());
  }
  if (btser.available()) {
    Serial.write(btser.read());
  }
}
