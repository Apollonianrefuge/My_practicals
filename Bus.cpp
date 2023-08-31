#include "Bus.h"

Bus::Bus(int id, time_t timeOfEntry) : Vehicle(id, timeOfEntry) {}

int Bus::getParkingDuration() const {
    return static_cast<int>(0.75 * Vehicle::getParkingDuration());
}