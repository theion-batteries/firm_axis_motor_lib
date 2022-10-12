#include "ImotorDriver.h"

motorDriver::motorDriver(Nema8* Nema8Type): MotorTypeNema8(Nema8Type)
{

}
motorDriver::motorDriver(void* OtherTypeMotor): AnyMotorType(OtherTypeMotor)
{

}

motorDriver::~motorDriver()
{
    if (MotorTypeNema8 != nullptr) delete MotorTypeNema8;
    if (AnyMotorType != nullptr) delete AnyMotorType;
    
}

void motorDriver::move(int direction, u_int steps, int speed)
{


}
void motorDriver::moveToEnd(int direction)
{


}
void motorDriver::setDirection(int new_direction)
{


}
int motorDriver::getDirection()
{


}
void motorDriver::setSpeed(int new_Speed)
{


}
int motorDriver::getSpeed()
{


}
double motorDriver::getPosition()
{


}
void motorDriver::setPosition(double new_Position)
{


}