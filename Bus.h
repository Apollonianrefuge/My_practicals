#include <ctime>
#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id, time_t timeOfEntry);
    virtual int getParkingDuration() const override;
};