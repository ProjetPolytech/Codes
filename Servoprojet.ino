#define IN1 11
#define IN2 10
#define IN3 9
#define IN4 8
#include <Servo.h>
#include <SoftwareSerial.h>
#define RX 7
#define TX 6
Servo myservo;
int i=0;
char Data;
SoftwareSerial BlueT(RX,TX);
void setup() {
  Serial.begin(115200);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT); 
  Serial.begin(9600);
  BlueT.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  if (BlueT.available()){
      Data=BlueT.read();
      if (Data=='U'){
        while (Data=='U'){
    
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
          delay(15); }}
        if (Data=='D'){
          while (Data='D'){
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
          delay(15); }}
          }
    
   }
