#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7
#include <Servo.h>
#include<SoftwareSerial.h>
#define RX 9
#define TX 10
Servo Servo1;
int i=0;
SoftwareSerial BlueT(RX,TX);
char data;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);   
  BlueT.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Servo1.attach(6,244,2400);
  if(BlueT.available()){
    data=BlueT.read();
    if (data=='R'){
      while(data=='R'){
        digitalWrite(IN1, LOW);
          digitalWrite(IN2, LOW);
          digitalWrite(IN3, LOW);
          digitalWrite(IN4, HIGH);
          delay(15);
          digitalWrite(IN1, LOW);
          digitalWrite(IN2, LOW);
          digitalWrite(IN3, HIGH);
          digitalWrite(IN4, LOW);
          delay(15); 
          digitalWrite(IN1, LOW);
          digitalWrite(IN2, HIGH);
          digitalWrite(IN3, LOW);
          digitalWrite(IN4, LOW);
          delay(15);
          digitalWrite(IN1, HIGH);
          digitalWrite(IN2, LOW);
          digitalWrite(IN3, LOW);
          digitalWrite(IN4, LOW);
          delay(15);}
    }
    if (data=='L'){
      while(data=='L'){
        digitalWrite(IN1, HIGH);
          digitalWrite(IN2, HIGH);
          digitalWrite(IN3, HIGH);
          digitalWrite(IN4, LOW);
          delay(15);
          digitalWrite(IN1, HIGH);
          digitalWrite(IN2, HIGH);
          digitalWrite(IN3, LOW);
          digitalWrite(IN4, HIGH);
          delay(15); 
          digitalWrite(IN1, HIGH);
          digitalWrite(IN2, LOW);
          digitalWrite(IN3, HIGH);
          digitalWrite(IN4, HIGH);
          delay(15);
          digitalWrite(IN1, LOW);
          digitalWrite(IN2, HIGH);
          digitalWrite(IN3, HIGH);
          digitalWrite(IN4, HIGH);
          delay(15);}
    }
  }
  
}
