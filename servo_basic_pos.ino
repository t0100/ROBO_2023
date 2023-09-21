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


void setup() {
 // myservo1.attach(7);  // attaches the servo on GIO2 to the servo object
  myservo2.attach(11);
 // myservo3.attach(10);
 //  attack_position();
}

void loop() {

myservo2.write(90);
delay(5000);
//myservo2.write(180);
delay(5000);

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
  delay(10);
  }
  delay(500);
  for (int i =y; i>0; i--){
  myservo2.write(i);
  myservo3.write(i);
  delay(10);
  }
}
