#include "IaxisCreator.h"


axisCreator::axisCreator(IendStopp* limitMax, IendStopp* limitMin, ImotorDriver* Motor) : MaxEndStop(limitMax), MinEndStop(limitMin), axisMotor(Motor)
{
}

axisCreator::~axisCreator()
{
    if (MaxEndStop != nullptr) delete MaxEndStop;
    if (MinEndStop != nullptr) delete MinEndStop;
    if (axisMotor != nullptr) delete axisMotor;
}
//
void axisCreator::moveToLimit(int direction)
{
    if (direction == 1) //up
    {
        while (!MaxEndStop->isPressed())
        {
            axisMotor->move(direction, 200, 100);
        }
    }

    if (direction == -1) //down
    {
        while (!MinEndStop->isPressed())
        {
            axisMotor->move(direction, 200, 100);
        }
    }
}

 ImotorDriver* axisCreator::getMotorPointer()
{
    return axisMotor;
}
 IendStopp* axisCreator::getEndStopMaxPointer()
{
    return MaxEndStop;
}
 IendStopp* axisCreator::getEndStopMinPointer()
{
    return MinEndStop;
}