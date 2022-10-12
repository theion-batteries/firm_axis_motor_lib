# firm_axis_motor_lib
this lib holds a general design for axis ( motors + endstops)

# How to use API
create a new instance of axisCreator by pointing to the base class (interface) IaxisCreator. the axis creator interface has 3 public integred interfaces.
the constructor of axisCreator takes them as arguments:

* Imotordriver: the type of motor to be created
* IendstopMax: the type of endStop for Limit up
* IendstopMin: the type of endStop for Limit down

This way, you could get some direct methods from the single interface (motor or endstop) directly. 
~~~cpp
x_axis->getEndStopMaxPointer()->isPressed(); // if endstop max is pressed
x_axis->getMotorPointer()->getPosition(); // get motor position
~~~
Composed methods are methods that use at least 2 objects to work. 
Example: to move the motor to the limit either up or down (endstop max or min), the method those 3 objects. 

~~~cpp
axis_x -> moveToLimit(1) // move the axis to limit up, use -1 for limit down (min)
~~~

please review main.cpp for more.
This lib is structured to be flexibel and dynamic.
To specify the implementation, please check the classes.