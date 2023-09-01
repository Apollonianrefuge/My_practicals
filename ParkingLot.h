#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    int count;
    Vehicle** vehicles; // Dynamic array of pointers to Vehicle objects

public:
    ParkingLot(int maxCapacity);
    ~ParkingLot();
    
    int getCount();
    bool parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif // PARKINGLOT_H
