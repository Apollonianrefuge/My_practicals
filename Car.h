#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int id);
    int getParkingDuration() const override;  // Override the base class method
};

// Bus.h
#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id);
    int getParkingDuration() const override;
};

// Motorbike.h
#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int id);
    int getParkingDuration() const override;
};