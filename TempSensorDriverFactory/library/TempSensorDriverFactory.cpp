#include"../../TempSensorDriver_1/include/TempSensorDriver1.hpp"
#include"../../TempSensorDriver_2/include/TempSensorDriver2.hpp"
#include"../../TempSensorDriverFactory/include/TempSensorDriverFactory.hpp"

namespace TempSensorFactory
{

ITempSensor::ITempSensorDriver_ptr TempSensorDriverFactory::create_driver(std::string driver_name)
{
    if(driver_name == "TempSensorDriver_1")
        return std::make_shared<TempSensorDriver::TempSensorDriver_1>();
    else if (driver_name == "TempSensorDriver_2")
       return std::make_shared<TempSensorDriver::TempSensorDriver_2>();
    else
        return nullptr;
}

}
