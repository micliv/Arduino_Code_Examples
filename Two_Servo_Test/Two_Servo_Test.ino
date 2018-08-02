#include <Servo.h>

/*demo program to test two continous rotation servos*/


Servo testservo1; //creates a servo object called testservo1
Servo testservo2; //creates a servo object called testservo2

int cw = 90; //sets the clockwise rotation speed at zero
int ccw = 90; //sets the counter clockwise rotation speed at zero

void setup()
{
testservo1.attach(10); //the first servo is on pin 10
testservo2.attach(11); //the second servo is on pin 11
}

void loop()
{
  // test servo 1
cw = 120;
testservo1.write(cw); //servo should rotate clockwise
delay(1000);
cw = 90; //stops the servo after a second
testservo1.write(cw);
delay(1000);
ccw = 60;
testservo1.write(ccw); //servo should rotate counter clockwise
delay(1000);
ccw = 90;
testservo1.write(ccw); //stops the servo

// Test servo 2

cw = 120;
testservo2.write(cw); //servo should rotate clockwise
delay(1000);
cw = 90; //stops the servo after a second
testservo2.write(cw);
delay(1000);
ccw = 60;
testservo2.write(ccw); //servo should rotate counter clockwise
delay(1000);
ccw = 90;
testservo2.write(ccw); //stops the servo
delay(1000);
} 
