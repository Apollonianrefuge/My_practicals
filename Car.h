#include "Vehicle.h"

class Car : public Vehicle {
    public:
        Car(int id, time_t timeOfEntry);
        int getParkingDuration();
};