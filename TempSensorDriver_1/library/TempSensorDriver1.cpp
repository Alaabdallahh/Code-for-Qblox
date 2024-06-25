#include"../../TempSensorDriver_1/include/TempSensorDriver1.hpp"

namespace TempSensorDriver
{

void TempSensorDriver_1::trigger_alarm()
{
    std::cout<<"alarm triggered by sensor 1"<<"\n";
}
double TempSensorDriver_1::getcurrent_temperature()
{
    return static_cast<double>(rand() % 100); //value between 0 and 99
}

}
