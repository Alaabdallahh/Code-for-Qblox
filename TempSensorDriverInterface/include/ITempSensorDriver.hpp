#ifndef ITEMPERATURESENSORDRIVER_H_INCLUDED
#define ITEMPERATURESENSORDRIVER_H_INCLUDED

#include<iostream>
#include<memory>

namespace ITempSensor
{

class ITempSensorDriver
{
public:
    virtual void trigger_alarm() = 0;
    virtual double getcurrent_temperature() = 0;
};
typedef std::shared_ptr<ITempSensorDriver> ITempSensorDriver_ptr;
}

#endif
