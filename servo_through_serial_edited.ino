#include <Servo.h>

/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 28 May 2015
  by Michael C. Miller
  modified 8 Nov 2013
  by Scott Fitzgerald

  http://arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>


Servo myservo1;  // create servo object to control a servo
Servo myservo2;
Servo myservo3;
// twelve servo objects can be created on most boards

const unsigned int MAX_MESSAGE_LENGTH = 2;
void setup() {
  myservo1.attach(7);  // attaches the servo on GIO2 to the servo object
  myservo2.attach(6);
  myservo3.attach(10);
  Serial.begin(57600);
  while (!Serial) {
  ;                    // wait for serial port to connect. Needed for native USB port only
  }
  Serial.println("ready");
  //rest_position();
  delay(500);
  attack_position();
}

void loop() {
//  test code  
//  attack_position();
//  delay(1000);
//  myservo1.write(52);
//  attack(0,135,0);

attack_position();
delay(1000);
attack(90,65,0);
delay(1000);

}

void rest_position(){
  myservo1.write(0);
  delay(150);
  myservo2.write(75);
  delay(150);
  myservo3.write(0);
}

int attack_position(){
  myservo1.write(90);
  delay(150);
  myservo3.write(0);
  delay(150);
  myservo2.write(0);
  delay(150);
}

int attack(int x, int y, int z){
  myservo1.write(x);
  delay(10);
  for (int i =0; i<y; i++){ 
  myservo2.write(i);
  myservo3.write(i);
  //delay(1);
  }
  delay(500);
  for (int i =y; i>0; i--){
  myservo2.write(i);
  myservo3.write(i);
 // delay(1);
  }
}

int attack_coor (int command){
  switch (command) {
    case 1:attack(52,135,0);break;
    case 2:attack(54,121,0);break;
    case 3:attack(56,110,0);break;
    case 4:attack(58,101,0);break;
    case 5:attack(60,97,0);break;
    case 6:attack(62,93,0);break;
    case 7:attack(64,91,0);break;
    case 8:attack(66,88,0);break;
    case 9:attack(68,84,0);break;
    case 10:attack(70,82,0);break;
    case 11:attack(72,79,0);break;
    case 12:attack(74,77,0);break;
    case 13:attack(76,74,0);break;
    case 14:attack(78,71,0);break;
    case 15:attack(80,69,0);break;
    case 16:attack(82,68,0);break;
    case 17:attack(84,67,0);break;
    case 18:attack(86,66,0);break;
    case 19:attack(88,65,0);break;
    case 20:attack(90,65,0);break;
    case 21:attack(92,65,0);break;
    case 22:attack(94,66,0);break;
    case 23:attack(96,67,0);break;
    case 24:attack(98,68,0);break;
    case 25:attack(100,69,0);break;
    case 26:attack(102,71,0);break;
    case 27:attack(104,74,0);break;
    case 28:attack(106,77,0);break;
    case 29:attack(108,79,0);break;
    case 30:attack(110,82,0);break;
    case 31:attack(112,84,0);break;
    case 32:attack(114,88,0);break;
    case 33:attack(116,91,0);break;
    case 34:attack(118,93,0);break;
    case 35:attack(120,97,0);break;
    case 36:attack(122,101,0);break;
    case 37:attack(124,110,0);break;
    case 38:attack(126,121,0);break;
    case 39:attack(128,135,0);break;
    case 50:rest_position();Serial.println("Executed 50");break;
    default:attack_position();break;
    }
    Serial.println("Done");
  
}
