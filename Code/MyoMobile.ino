//MyoMobile

//Include Header files
#include "Servo.h"
#include "MyoController.h"

//Define Pinouts
#define FIST_PIN 3
//#define serv 6
#define WAVEIN_PIN 5
//#define WAVEOUT_PIN 6
#define FINGERSSPREAD_PIN 7
#define DOUBLETAP_PIN 8

Servo servo_test;
MyoController myo = MyoController();

//Set speed
int X=160;

//Initialize inputs and outputs
void setup() {
  pinMode(FIST_PIN, OUTPUT);
  pinMode(WAVEIN_PIN, OUTPUT);
  pinMode(WAVEOUT_PIN, OUTPUT);
  pinMode(FINGERSSPREAD_PIN, OUTPUT);
  pinMode(DOUBLETAP_PIN, OUTPUT);
  servo_test.attach(6);             // attach the signal pin of servo to pin9 of arduino
  myo.initMyo();
}

void loop()
{
   myo.updatePose();                 //Keeps rechecking the pose
   switch ( myo.getCurrentPose() ) {
    
    case rest:                      //No pose; Set all pins low
      analogWrite(FIST_PIN,0); 
      digitalWrite(WAVEIN_PIN,LOW);
      digitalWrite(WAVEOUT_PIN,LOW);
      digitalWrite(FINGERSSPREAD_PIN,LOW);
      digitalWrite(DOUBLETAP_PIN,LOW);
      //analogWrite(serv,0);
      break;
      
    case fist:                      //Pose=Fist
      servo_test.write(85);         //Car faces front
      delay(100);
      analogWrite(FIST_PIN, X);     //Set back motor on
      break;
     
    case waveIn://lrfy              //Pose = wave in
     servo_test.write(45);          //Car angles to move left
     delay(100);
     analogWrite(FIST_PIN, X);      //Set back motor on
      break;
      
    case waveOut:                   //Pose = wave out
     servo_test.write(115);         //Car angles to move rigt
     delay(100);
     analogWrite(FIST_PIN, X);      //Set back motor on
      break;
      
    case fingersSpread:             //Pose = fingerspread; Accelerate
      //if (X == 160){
        X=250;                      //Change speed to 250 out of 255 
       // delay(10);
     // }
     // else if(159<X<161){
       // X=160;
       // delay(10);
    //  }
     // digitalWrite(DOUBLETAP_PIN,HIGH);
      break;
     // for (X=0;X=250;X++){
      //  analogWrite(FIST_PIN,X);
      //  delay(100);
      //}
      //digitalWrite(FIST_PIN,X);
      break;
      
    case doubleTap:               //Pose = doubleTap; Decelerate
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
