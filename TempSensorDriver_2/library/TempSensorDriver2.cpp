#include"../../TempSensorDriver_2/include/TempSensorDriver2.hpp"

namespace TempSensorDriver
{

void TempSensorDriver_2::trigger_alarm()
{
    std::cout<<"alarm triggered by sensor 2"<<"\n";
}
double TempSensorDriver_2::getcurrent_temperature()
{
    return static_cast<double>(rand() % 100); //value between 0 and 99
}

}

