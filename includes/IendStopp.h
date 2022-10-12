#pragma once

#include "EndSwitch.hpp"
#include "light_barrier.hpp"

class IendStopp
{
private:
    /* data */
public:
    IendStopp(/* args */);
    virtual ~IendStopp();
    virtual bool get_current_state()=0;
    virtual bool isTraversed()=0;
    virtual bool isPressed()=0;
};


class endStopp: public IendStopp
{
private:
    endSwitch* buttonEndStop;
    lightBarrier* lightEndStop;
public:
    endStopp(endSwitch* buttonType);
    endStopp(lightBarrier* lightType);
    virtual ~endStopp();
    virtual bool get_current_state();
    virtual bool isTraversed();
    virtual bool isPressed();
};