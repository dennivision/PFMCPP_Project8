#include "HighwayPatrol.h"
#include <iostream>

#include "Highway.h"

HighwayPatrol::HighwayPatrol() : Vehicle("Highway Patrol") {}

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << name << ": scanning highway for speeders" << std::endl;

    for( size_t i = h->vehicles.size(); i-- > 0; )
    {
        auto* v = h->vehicles[i];
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            h->changeSpeed(50); //slow down for the highway patrol
        }
    }
}

void HighwayPatrol::pullOver( Vehicle* v, bool willArrest, Highway* h )
{
    std::cout << "\n\n";
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;
    if( willArrest )
    {
        //assert(false);
        //print the vehicle type in this std::cout between "THE [" and "] PULL". 
        std::cout << name << ": YOU IN THE [ " << h->getVehicleType(v) << " ] PULL OVER AND SHOW YOUR HANDS" << std::endl;
        std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
        h->removeVehicle(v);
    }
}

void HighwayPatrol::setSpeed(int s)
{
    std::cout << "I hate my job" << std::endl;
    Vehicle::setSpeed(s);
}
