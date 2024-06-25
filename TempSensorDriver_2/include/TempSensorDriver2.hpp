#ifndef TEMPSENSORDRIVER_2_H_INCLUDED
#define TEMPSENSORDRIVER_2_H_INCLUDED

#include"../../TempSensorDriverInterface/include/ITempSensorDriver.hpp"

namespace TempSensorDriver
{

class TempSensorDriver_2: public ITempSensor::ITempSensorDriver
{
public:
    TempSensorDriver_2(){};

    virtual void trigger_alarm();
    virtual double getcurrent_temperature();


};
}
#endif
