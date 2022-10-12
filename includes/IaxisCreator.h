#pragma once

#include "ImotorDriver.h"
#include "IendStopp.h"

class IaxisCreator
{
private:
    /* data */
public:
    IaxisCreator(/* args */);
    virtual ~IaxisCreator();
    virtual void moveToLimit(int direction)=0;
    virtual ImotorDriver* getMotorPointer()=0;
    virtual IendStopp* getEndStopMaxPointer()=0;
    virtual IendStopp* getEndStopMinPointer()=0;

};

class axisCreator : public IaxisCreator
{
public:
    IendStopp* MaxEndStop;
    IendStopp* MinEndStop;
    ImotorDriver* axisMotor;

public:
    axisCreator(IendStopp* limitMax, IendStopp* limitMin, ImotorDriver* Motor);
    virtual ~axisCreator();
    virtual void moveToLimit(int direction);
    virtual ImotorDriver* getMotorPointer();
    virtual IendStopp* getEndStopMaxPointer();
    virtual IendStopp* getEndStopMinPointer();

};