#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int id) : ID(id) {
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

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const{
    return static_cast<int>(0.9 * Vehicle::getParkingDuration()); //call function from Vehicle class
}
Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    return static_cast<int>(0.75 * Vehicle::getParkingDuration());
}

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    return static_cast<int>(0.85 * Vehicle::getParkingDuration()); //call function from Vehicle class
}