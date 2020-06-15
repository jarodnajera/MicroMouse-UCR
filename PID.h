//PID h file

  void RegulateSensorL
    {
      sensorLPID = analogRead(sensorLeft);
    }

  void RegulateSensorR
    {
      sensorRPID = analogRead(sensorRight);
    }

  void PIDControl
    {
      if(sensorRPID > sensorLPID)
        {
          error = sensorRPID - sensorLPID;
        }
    }
