#ifndef TEMPSENSORDRIVERFACTORY_H_INCLUDED
#define TEMPSENSORDRIVERFACTORY_H_INCLUDED

#include"../../TempSensorDriverInterface/include/ITempSensorDriver.hpp"
#include <string>

namespace TempSensorFactory
{

class TempSensorDriverFactory
{
public:
    TempSensorDriverFactory(){};

    virtual ITempSensor::ITempSensorDriver_ptr create_driver(std::string driver_name);
};

}

#endif
