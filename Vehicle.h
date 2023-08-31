#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    virtual ~Vehicle() = default;  // Virtual destructor
    int getID() const;
    std::time_t getTimeOfEntry() const;
    virtual int getParkingDuration();  // Virtual function
};

#endif // VEHICLE_H
