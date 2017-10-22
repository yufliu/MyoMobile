//#include "MyoController.h"
//
//#define motorPin 3
//#define WAVEIN_PIN 5
//#define WAVEOUT_PIN 6
//#define FINGERSSPREAD_PIN 7
//#define DOUBLETAP_PIN 8
// int x=0;
//MyoController myo = MyoController();
//
//void setup() {
//
//  pinMode(motorPin, OUTPUT);
//  pinMode(WAVEIN_PIN, OUTPUT);
//  pinMode(WAVEOUT_PIN, OUTPUT);
//
//  
//  pinMode(FINGERSSPREAD_PIN, OUTPUT);
//  pinMode(DOUBLETAP_PIN, OUTPUT);
//
//  Serial.begin(9600);
//  while (! Serial);
//  Serial.println("Speed 0 to 255");   //Prints Speed
//  
//  myo.initMyo();
//}
//
//void loop()
//{
//   //Serial.println("HI");
//   myo.updatePose();
//   myo.getCurrentPose();
//
//   /*
//   if ( x =rest){
//          digitalWrite(FIST_PIN,LOW); 
//      digitalWrite(WAVEIN_PIN,LOW);
//      digitalWrite(WAVEOUT_PIN,LOW);
//      digitalWrite(FINGERSSPREAD_PIN,LOW);
//      digitalWrite(DOUBLETAP_PIN,LOW);
//     // break;
//   }
//   else if ( x = fist){
//    digitalWrite(FIST_PIN,HIGH); 
//   }
//      else if ( x = waveIn){
//    digitalWrite(WAVEIN_PIN,HIGH); 
//   }
//      else {
//        x=unknown;
//        digitalWrite(FIST_PIN,LOW); 
//      digitalWrite(WAVEIN_PIN,LOW);
//      digitalWrite(WAVEOUT_PIN,LOW);
//      digitalWrite(FINGERSSPREAD_PIN,LOW);
//      digitalWrite(DOUBLETAP_PIN,LOW);
//   }
//   */
//   
//
//   switch ( myo.getCurrentPose() ) {
//    case rest:
//      digitalWrite(motorPin,LOW); 
//      digitalWrite(WAVEIN_PIN,LOW);
//      digitalWrite(WAVEOUT_PIN,LOW);
//      digitalWrite(FINGERSSPREAD_PIN,LOW);
//      digitalWrite(DOUBLETAP_PIN,LOW);
//      break;
//    case fist:
//     //if (Serial.available())
//  //{
//   // int speed = Serial.parseInt();
//   // if (speed >= 0 && speed <= 255)
//    //{
//      analogWrite(motorPin, 100);
//   // }
//  //}
//    
//    //  digitalWrite(FIST_PIN,HIGH);
//     // break;
//    case waveIn:
//       analogWrite(motorPin, 255);
//      //digitalWrite(WAVEIN_PIN,HIGH);
//      break;
//    case waveOut:
//      analogWrite(motorPin,0);
//      //digitalWrite(WAVEOUT_PIN,HIGH);
//      break;
//    case fingersSpread:
//      digitalWrite(FINGERSSPREAD_PIN,HIGH);
//      break;
//    case doubleTap:
//      digitalWrite(DOUBLETAP_PIN,HIGH);
//      break;
//   } 
// 
//   delay(10);
//}

/////////////////////////////////////////////////////////////////////
#include "MyoController.h"
//#include "Servo.h"

#define FIST_PIN 3
#define WAVEIN_PIN 5
#define WAVEOUT_PIN 6
#define FINGERSSPREAD_PIN 7
#define DOUBLETAP_PIN 8
#define Servo_pin 4
//Servo servo_test;
//int angle =0;
//
//MyoController myo = MyoController();
//
//void setup() {
//
//  pinMode(FIST_PIN, OUTPUT);
//  pinMode(WAVEIN_PIN, OUTPUT);
//  pinMode(WAVEOUT_PIN, OUTPUT);
//  pinMode(FINGERSSPREAD_PIN, OUTPUT);
//  pinMode(DOUBLETAP_PIN, OUTPUT);
//  pinMode(Servo_pin, OUTPUT);
//  
//  myo.initMyo();
//}
//
//void loop()
//{
//   //Serial.println("HI");
//   myo.updatePose();
//   switch ( myo.getCurrentPose() ) {
//    case rest:
//      digitalWrite(FIST_PIN,LOW); 
//      digitalWrite(WAVEIN_PIN,LOW);
//      digitalWrite(WAVEOUT_PIN,LOW);
//      digitalWrite(FINGERSSPREAD_PIN,LOW);
//      digitalWrite(DOUBLETAP_PIN,LOW);
//      break;
//    case fist:
//      //digitalWrite(FIST_PIN,HIGH);
//     // analogWrite(Servo_pin, 0);
//      analogWrite(FIST_PIN, 255);
//      break;
//    case waveIn:
//     // digitalWrite(WAVEIN_PIN,HIGH);
//     analogWrite(FIST_PIN, 150);
//      break;
//    case waveOut:
//     // digitalWrite(WAVEOUT_PIN,HIGH);
//     analogWrite(FIST_PIN, 0);
//      break;
//    case fingersSpread:
//     // digitalWrite(FINGERSSPREAD_PIN,HIGH);
//     
//     analogWrite(FIST_PIN, 255);
//     analogWrite(Servo_pin, 150);
//      //for(angle = 0; angle < 180; angle += 1)    // command to move from 0 degrees to 180 degrees 
//  //{                                  
//   // servo_test.write(angle);                 //command to rotate the servo to the specified angle
//   // delay(15);                       
//  //} 
//      break;
//    case doubleTap:
//      digitalWrite(DOUBLETAP_PIN,HIGH);
//      break;
//   } 
//   delay(100);
//}
#include "Servo.h"
#include "MyoController.h"
#define FIST_PIN 3
//#define serv 6
#define WAVEIN_PIN 5
//#define WAVEOUT_PIN 6
#define FINGERSSPREAD_PIN 7
#define DOUBLETAP_PIN 8

Servo servo_test;
MyoController myo = MyoController();
int X=160;

void setup() {
  pinMode(FIST_PIN, OUTPUT);
  pinMode(WAVEIN_PIN, OUTPUT);
  pinMode(WAVEOUT_PIN, OUTPUT);
  pinMode(FINGERSSPREAD_PIN, OUTPUT);
  pinMode(DOUBLETAP_PIN, OUTPUT);
  servo_test.attach(6);      // attach the signal pin of servo to pin9 of arduino
  myo.initMyo();
}
void loop()
{
   //Serial.println("HI");
   myo.updatePose();
   switch ( myo.getCurrentPose() ) {
    case rest:
      analogWrite(FIST_PIN,0); 
      digitalWrite(WAVEIN_PIN,LOW);
      digitalWrite(WAVEOUT_PIN,LOW);
      digitalWrite(FINGERSSPREAD_PIN,LOW);
      digitalWrite(DOUBLETAP_PIN,LOW);
      //analogWrite(serv,0);
      break;
    case fist:
      //digitalWrite(FIST_PIN,HIGH);
      servo_test.write(90);
      delay(100);
      analogWrite(FIST_PIN, X);      
    //  analogWrite(serv,100);
      break;
    case waveIn://lrfy
     // digitalWrite(WAVEIN_PIN,HIGH);
     servo_test.write(30);
     delay(100);
     analogWrite(FIST_PIN, X);
     

    // analogWrite(serv,0);
      break;
    case waveOut:   //right
     // digitalWrite(WAVEOUT_PIN,HIGH);
     servo_test.write(130);
     delay(100);
     analogWrite(FIST_PIN, X);   
    // analogWrite(serv,30);
      break;
    case fingersSpread:
      if (X == 160){
        X=250;
        delay(10);
      }
      else if(159<X<161){
        X=160;
        delay(10);
      }
     // digitalWrite(DOUBLETAP_PIN,HIGH);
      break;
     // for (X=0;X=250;X++){
      //  analogWrite(FIST_PIN,X);
      //  delay(100);
      //}
      //digitalWrite(FIST_PIN,X);
      break;
    case doubleTap:     //Change Speed
      X=130;
//      if (X == 130){
//        X=250;
//      }
//      else if(129<X<131){
//        X=130;
//      }
//      digitalWrite(DOUBLETAP_PIN,HIGH);
//      break;
   } 
   delay(100);
}


///////////////////////////////////////////////////////////////
