#include <iostream>
#include <chrono>
#include <thread>
#include"TempSensorDriverFactory/include/TempSensorDriverFactory.hpp"

#include"pch.h"

int main()
{
    TempSensorFactory::TempSensorDriverFactory driver_factory;

    ITempSensor::ITempSensorDriver_ptr driver_1 = driver_factory.create_driver("TempSensorDriver_1");
    ITempSensor::ITempSensorDriver_ptr driver_2 = driver_factory.create_driver("TempSensorDriver_2");

    while(1)
    {

        double temp_1 = driver_1->getcurrent_temperature();
        std::cout<< "temperature from driver 1 is "<<temp_1<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        if(temp_1 >50)
            driver_1->trigger_alarm();

        double temp_2 = driver_2->getcurrent_temperature();
        std::cout<< "temperature from driver 2 is "<<temp_2<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        if(temp_2 >50)
            driver_2->trigger_alarm();
    }


    return 0;
}
