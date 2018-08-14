/*
Freeduino Motor Shield Test 1 M Liva Aug 2015
Original code from:
  // Motor Shield test
  // by NKC Electronics
  // Test Motor B
This code will include the generic pin assignments for the shield   
Motor A pins are close to the edge of the board, Motor B pins are the inner set
This will test both motors, increasing then decreasing speed in each direction. 
  
*/

const int dirpinA = 13; // Direction pin for motor A is Digital 13
const int dirpinB = 12; // Direction pin for motor B is Digital 12
const int speedpinA = 10; // Speed pin for motor A is Digital 10 (PWM)
const int speedpinB = 9; // Speed pin for motor B is Digital 9 (PWM)
int motorspeedA = 0;
int motorspeedB = 0;
int dirA = LOW;
int dirB = LOW;
int timestep =30; //variable for controlling speed

void setup()
{
pinMode(dirpinA, OUTPUT);
pinMode(dirpinB, OUTPUT);
pinMode(speedpinA,OUTPUT);
pinMode(speedpinB,OUTPUT);
}

void loop()
{
  //increase and decrease motor A speed in one direction 
digitalWrite(dirpinA, dirA); // set direction for motor A
for(motorspeedA=0; motorspeedA<250; motorspeedA++)
  {
  analogWrite(speedpinA, motorspeedA); // set speed (PWM)
  delay(timestep); // 30 ms
  }
delay(timestep*10); // keep the motor at full speed for a longer time
for(motorspeedA=250; motorspeedA>0; motorspeedA--)
  {
  analogWrite(speedpinA, motorspeedA); // set speed (PWM)
  delay(timestep); // 30 ms
  }
analogWrite(speedpinA, 0); // stops motor A
dirA = !dirA; //changes the direction
delay(timestep*10); // keep the motor stopped for a longer time


// increase and decrease motor A speed in the other direction
digitalWrite(dirpinA, dirA); // set direction for motor A
for(motorspeedA=0; motorspeedA<250; motorspeedA++)
  {
  analogWrite(speedpinA, motorspeedA); // set speed (PWM)
  delay(timestep); // 30 ms
  }
delay(timestep*10); // keep the motor at full speed for a longer time
for(motorspeedA=250; motorspeedA>0; motorspeedA--)
  {
  analogWrite(speedpinA, motorspeedA); // set speed (PWM)
  delay(timestep); // 30 ms
  }
analogWrite(speedpinA, 0); // stops motor A
dirA = !dirA; //changes the direction
delay(timestep*10); // keep the motor stopped for a longer time


//increase and decrease motor B speed in one direction 
digitalWrite(dirpinB, dirB); // set direction for motor A
for(motorspeedB=0; motorspeedB<250; motorspeedB++)
  {
  analogWrite(speedpinB, motorspeedB); // set speed (PWM)
  delay(timestep); // 30 ms
  }
delay(timestep*10); // keep the motor at full speed for a longer time
for(motorspeedB=250; motorspeedB>0; motorspeedB--)
  {
  analogWrite(speedpinB, motorspeedB); // set speed (PWM)
  delay(timestep); // 30 ms
  }
analogWrite(speedpinB, 0); // stops motor A
dirB = !dirB; //changes the direction
delay(timestep*10); // keep the motor stopped for a longer time


// increase and decrease motor A speed in the other direction
digitalWrite(dirpinB, dirB); // set direction for motor A
for(motorspeedA=0; motorspeedA<250; motorspeedA++)
  {
  analogWrite(speedpinB, motorspeedB); // set speed (PWM)
  delay(timestep); // 30 ms
  }
delay(timestep*10); // keep the motor at full speed for a longer time
for(motorspeedB=250; motorspeedB>0; motorspeedB--)
  {
  analogWrite(speedpinB, motorspeedB); // set speed (PWM)
  delay(timestep); // 30 ms
  }
analogWrite(speedpinB, 0); // stops motor A
dirB = !dirB; //changes the direction
delay(timestep*10); // keep the motor stopped for a longer time

}
