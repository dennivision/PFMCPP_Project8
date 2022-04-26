#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::burnDiesel( )
{
    setSpeed(79);
    std::cout << "Honk!" << std::endl;
}
void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << "Is there any way we can work this out officer?" << std::endl;
}

void SemiTruck::setSpeed(int speed)
{
    std::cout << name << ": I really have to pee" << std::endl;
    Vehicle::setSpeed(speed);
}
