#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int duration = static_cast<int>(currentTime - getTimeOfEntry());
    return static_cast<int>(duration * 0.9);
}