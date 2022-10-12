#include "IendStopp.h"

endStopp::endStopp(endSwitch* buttonType):buttonEndStop(buttonType)
{


}
endStopp::endStopp(lightBarrier* lightType):lightEndStop(lightType)
{


}

endStopp::~endStopp()
{
    if (buttonEndStop != nullptr) delete buttonEndStop;
    if (lightEndStop != nullptr) delete lightEndStop;
}

bool endStopp::get_current_state()
{


}

bool endStopp::isTraversed()
{



}

bool endStopp::isPressed()
{



}