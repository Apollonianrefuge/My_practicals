#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() {
    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - getTimeOfEntry();
    return static_cast<int>(duration * 0.9);
}
