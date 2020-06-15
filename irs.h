//irs h file

void ReadIR()
  {
    sensorReadingL = analogRead(sensorLeft);
    sensorReadingR = analogRead(sensorRight);
    sensorReadingM = analogRead(sensorMiddle);

    //serial readings
    Serial.println(sensorReadingL);
    Serial.println(sensorReadingR);
    Serial.println(sensorReadingM);
  }
