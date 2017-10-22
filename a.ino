//Header files:
#include <Servo.h>

///*DC motor Code*/
 // Define motor control pins:
//int motorPin = 6;
//
//// Global Variables:
//int speed;
// 
//void setup() 
//{ 
//  pinMode(motorPin, OUTPUT);
//  Serial.begin(9600);
//  while (! Serial);
//  Serial.println("Speed 0 to 255");   //Prints Speed
//} 
// 
// void loop() 
//{ 
//
//  if (Serial.available())
//  {
//    int speed = Serial.parseInt();
//    if (speed >= 0 && speed <= 255)
//    {
//      analogWrite(motorPin, speed);
//    }
//  }
//} 

////MY Code for outputing motor to spin CONTINUOUSLY////////////
/*
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
} 
 void loop() 
{ 
      digitalWrite(motorPin, HIGH);
} 


//////////////////////////////////////////////////////////////////////
//FUNCTION FOR CHANGING SPEEDS WITH SERIAL MONITOR
void set_Speed(uint8_t speed) {
  if (Serial.available())
  {
    speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    {
      analogWrite(motorPin, speed);
    }
  }
}


//////////////////////////////////////////////////////////////////////
//Servo Control example

Servo servo_test;        //initialize a servo object for the connected servo  
                
int angle = 0;    

void setup() 
{ 
  servo_test.attach(9);      // attach the signal pin of servo to pin9 of arduino
} 
  
void loop() 
{ 
  for(angle = 0; angle < 180; angle += 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo_test.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
 
  delay(1000);
  
  for(angle = 180; angle>=1; angle-=5)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo_test.write(angle);              //command to rotate the servo to the specified angle
    delay(5);                       
  } 
    delay(1000);
}
*/
//////////////////////////////////////////////////////////////////////
//Servo Control using serial

//Servo servo_test;        //initialize a servo object for the connected servo  
//                
//int angle = 0;    
//
//void setup() 
//{ 
//  servo_test.attach(6);      // attach the signal pin of servo to pin9 of arduino
//} 
//  
//void loop() 
//{ 
////  for(angle = 0; angle < 180; angle += 1)    // command to move from 0 degrees to 180 degrees 
////  {                                  
////    servo_test.write(angle);                 //command to rotate the servo to the specified angle
////    delay(15);                       
////  } 
// //servo_test.write(1);   
//  delay(1000);
//  servo_test.write(179);   
////  for(angle = 180; angle>=1; angle-=5)     // command to move from 180 degrees to 0 degrees 
////  {                                
////    servo_test.write(angle);              //command to rotate the servo to the specified angle
////    delay(5);                       
////  } 
//
//    delay(1000);
//}
/////*
//// void loop() 
//{ 
//
//  if (Serial.available())
//  {
//    int speed = Serial.parseInt();
//    if (speed >= 0 && speed <= 255)
//    {
//      analogWrite(motorPin, speed);
//    }
//  }
//} 
//*/ 

////////////////////////////////////////////////

#include "Servo.h"
//#include "MyoController.h"
#define FIST_PIN 3


Servo servo_test;
int X=20;

void setup() {
  pinMode(FIST_PIN, OUTPUT);
  servo_test.attach(6);      // attach the signal pin of servo to pin9 of arduino
//  myo.initMyo();
}
void loop()
{

      //digitalWrite(FIST_PIN,HIGH);
      servo_test.write(90);
     // delay(1000);
     // servo_test.write(135);
      analogWrite(FIST_PIN, X);      
    //  analogWrite(serv,100);
//      break;
//    case waveIn:
//     // digitalWrite(WAVEIN_PIN,HIGH);
//     servo_test.write(30);
//     delay(100);
//     analogWrite(FIST_PIN, X);
//     
//
//    // analogWrite(serv,0);
//      break;
//    case waveOut:
//     // digitalWrite(WAVEOUT_PIN,HIGH);
//     servo_test.write(150);
//     delay(100);
//     analogWrite(FIST_PIN, X);   
//    // analogWrite(serv,40);
//      break;
//    case fingersSpread:
//      X= 250;
//      digitalWrite(FIST_PIN,X);
//      break;
//    case doubleTap:
//      X=120;
//      digitalWrite(DOUBLETAP_PIN,HIGH);
//      break;
//   
   //delay(100);
}

//25 and 135


