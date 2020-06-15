//global values

//ir code
//left sensor
int sensorReadingL;
int sensorLeft = A9; //receiver
//emitter is always on

//right sensor
int sensorReadingR;
int sensorRight = A8; //receiver
//emitter is always on

//middle sensor
int sensorReadingM;
int sensorMiddle = A6; //receiver
//emitter is always on

//motors code
//speeds
int motorStop = 0;
int motorFullSpeed = 255;
int motorHalfSpeed = 63;

//motor1
int motor1forward = 5;
int motor1reverse = 6;

//motor2
int motor2forward = 4;
int motor2reverse = 3;

//PID Control
int sensorLPID;
int sensorRPID;
int error;
