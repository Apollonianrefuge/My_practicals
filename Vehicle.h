// Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    std::time_t getTimeOfEntry() const;
    int getID() const;
    virtual int getParkingDuration() const; // Add a virtual function
};

#endif // VEHICLE_H
