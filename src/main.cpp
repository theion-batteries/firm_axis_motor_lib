#include "IaxisCreator.h"

// pin assignement

#define ENDSTOP_MAX_PIN 1 // pin endstop limit up 
#define ENDSTOP_MIN_PIN 2 // pin endstop limit up 
#define MOTOR_STEP_REV 200 // 200 /revolution
#define MS1_PIN 1 // microstep pin 1/4
#define MS2_PIN 2 // microstep pin 1/8
#define MS3_PIN 3 // microstep pin 1/16
#define DIRECTION_PIN 1 // Dir pin
#define ENABLE_PIN 1 // enable pin
#define STEP_PIN 1 // step pin
#define DIRECTION 1 // initial heading : 1 up, -1 down
// use case
int main ()
{
    // create complex object: axis with 1 motor and 2 endstops
    IaxisCreator* x_axis = new axisCreator(new endStopp(new endSwitch(ENDSTOP_MAX_PIN)), new endStopp(new endSwitch(ENDSTOP_MIN_PIN)),
    new motorDriver(new Nema8(MOTOR_STEP_REV, MS1_PIN,MS2_PIN,MS3_PIN,DIRECTION_PIN,ENABLE_PIN,STEP_PIN,DIRECTION) ));
    x_axis->moveToLimit(1); // up limit
    x_axis->getEndStopMaxPointer()->isPressed(); // if endstop max is pressed
    x_axis->getMotorPointer()->getPosition(); // get motor position

}