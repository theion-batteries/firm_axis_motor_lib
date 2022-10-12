#pragma once
#include "Nema_8.hpp"

class ImotorDriver
{
private:
    /* data */
public:
    ImotorDriver(/* args */);
    virtual ~ImotorDriver();
    virtual void move(int direction, u_int steps, int speed)=0;
    virtual void moveToEnd(int direction)=0;
    virtual void setDirection(int new_direction)=0;
    virtual int getDirection(int new_direction)=0;
    virtual void setSpeed(int new_Speed)=0;
    virtual int getSpeed()=0;
    virtual double getPosition() =0;
    virtual void setPosition(double new_Position) =0;
};

class motorDriver: public ImotorDriver
{
private:
    Nema8* MotorTypeNema8;
    void* AnyMotorType;
public:
    motorDriver(Nema8* Nema8Type);
    motorDriver(void* OtherTypeMotor);

    virtual ~motorDriver();
    virtual void move(int direction, u_int steps, int speed)=0;
    virtual void moveToEnd(int direction)=0;
    virtual void setDirection(int new_direction)=0;
    virtual int getDirection(int new_direction)=0;
    virtual void setSpeed(int new_Speed)=0;
    virtual int getSpeed()=0;
    virtual double getPosition() =0;
    virtual void setPosition(double new_Position) =0;
};

