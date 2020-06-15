//main code
//global values
#include "global_values.h"
//irs code
#include "irs.h"
//motors code
#include "motors.h"

int LEDpin = 0;

void setup()
  {
    pinMode(LEDpin, OUTPUT);
    
    //serial readings
    Serial.begin(9600);
    
    //irs
    pinMode(sensorLeft, INPUT);
    pinMode(sensorRight, INPUT);
    pinMode(sensorMiddle, INPUT);

    //motors
    pinMode(motor1forward, OUTPUT);
    pinMode(motor1reverse, OUTPUT);
    pinMode(motor2forward, OUTPUT);
    pinMode(motor2reverse, OUTPUT);
  }

void loop()
  {
    //irs
    ReadIR();

    //motors
    forward();
    delay(5000);
    brake();
    delay(1000);
    reverse();
    delay(5000);
//Serial.println("TESTING");

  testLED();
  
  }

void testLED()
  {
    digitalWrite(LEDpin, HIGH);
    delay(1000);
    digitalWrite(LEDpin, LOW);
    delay(1000);
  }
