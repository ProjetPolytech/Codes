#include <Servo.h>
#include<SoftwareSerial.h>
#define RX 10
#define TX 11

Servo Servo1;
int angle=Servo1.read();
SoftwareSerial BlueT(RX,TX);
char data;
void setup() {
    Serial.begin(9600);
  
    BlueT.begin(9600);

}

void loop() {
  Servo1.attach(6,244,2400);
  
  BlueT.print("*A"+String(angle)+"*");
  Servo1.writeMicroseconds(angle);

}
