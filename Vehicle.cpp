#include "Vehicle.h"
#include "Car.h"
#include <ctime>

Vehicle::Vehicle(int id, time_t timeOfEntry) {
    time(&timeOfEntry);
}
time_t Vehicle::getTimeOfEntry() const {
    return timeOfEntry;
}
int Vehicle::getID() const {
    return ID;
}
int Vehicle::getParkingDuration() const {
    return static_cast <int>(time(nullptr) - timeOfEntry);
}
const char* Vehicle::getReadableTimeOfEntry() const {
    return ctime(&timeOfEntry);
}