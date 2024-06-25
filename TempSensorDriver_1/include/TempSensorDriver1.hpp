#ifndef TEMPSENSORDRIVER_1_H_INCLUDED
#define TEMPSENSORDRIVER_1_H_INCLUDED

#include"../../TempSensorDriverInterface/include/ITempSensorDriver.hpp"

namespace TempSensorDriver
{
class TempSensorDriver_1: public ITempSensor::ITempSensorDriver
{
public:
    TempSensorDriver_1(){};

    virtual void trigger_alarm();
    virtual double getcurrent_temperature();

};


}

#endif
