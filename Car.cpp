#include "Car.h"

Car::Car(int id, time_t timeOfEntry) : Vehicle(id, timeOfEntry) {}

int Car::getParkingDuration() {
    return static_cast<int>(0.9 * Vehicle::getParkingDuration()); //call function from Vehicle class
}