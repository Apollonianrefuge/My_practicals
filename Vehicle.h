#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    virtual ~Vehicle(); // Declare virtual destructor

    int getID() const;
    std::time_t getTimeOfEntry() const;

    virtual int getParkingDuration() = 0; // Pure virtual function
};

#endif // VEHICLE_H
