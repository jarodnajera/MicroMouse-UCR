//motor h file

void forward()
  {
    digitalWrite(motor1forward, HIGH);
    digitalWrite(motor1reverse, LOW);

    digitalWrite(motor2forward, HIGH);
    digitalWrite(motor2reverse, LOW);
  }

void reverse()
  {
    digitalWrite(motor1forward, LOW);
    digitalWrite(motor1reverse, HIGH);

    digitalWrite(motor2forward, LOW);
    digitalWrite(motor2reverse, HIGH);
  }

void brake()
  {
    digitalWrite(motor1forward, HIGH);
    digitalWrite(motor1reverse, HIGH);

    digitalWrite(motor2forward, HIGH);
    digitalWrite(motor2reverse, HIGH);
  }
