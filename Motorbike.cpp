#include "Motorbike.h"

Motorbike::Motorbike(int id, time_t timeOfEntry) : Vehicle(id, timeOfEntry) {}

int Motorbike::getParkingDuration() const {
    return static_cast<int>(0.85 * Vehicle::getParkingDuration());
}