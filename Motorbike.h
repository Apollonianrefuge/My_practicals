#include <ctime>
#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int id, time_t timeOfEntry);
    virtual int getParkingDuration() const override;
};