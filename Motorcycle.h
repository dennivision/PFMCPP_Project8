#pragma once

#include <iostream>
#include <limits>

#include "Vehicle.h"

struct Motorcycle : Vehicle
{
    Motorcycle(const std::string& n);
    ~Motorcycle() override = default;
    Motorcycle(const Motorcycle&) = default;
    Motorcycle& operator=(const Motorcycle&) = default;
    
    void lanesplitAndRace( int topSpeed = std::numeric_limits<int>::max() );
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};
