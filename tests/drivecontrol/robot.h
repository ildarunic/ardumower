// Ardumower robot

#ifndef ROBOT_H
#define ROBOT_H


#include "arbitrator.h"
#include "behavior.h"


class RobotControl
{
  public:
    unsigned long loopCounter;   // loop counter
    int loopsPerSec; // loops per second
    int num_collision; // collision counter
    float motorMowCircleAbovePower;
    DriveForwardBehavior driveForwardBehavior;
    HitPerimeterBehavior hitPerimeterBehavior;
    HitObstacleBehavior hitObstacleBehavior;
    TrackingBehavior trackingBehavior;
    ChargingBehavior chargingBehavior;
    CircleBehavior circleBehavior;
    Arbitrator arbitrator;
    PID perimeterPID;
    RobotControl();
    unsigned long nextPrintTime;
    virtual void run();
    virtual char readKey();
    virtual void processKey(char key);
    virtual void setup();
    virtual void loop();
    virtual void print();
};


#endif
