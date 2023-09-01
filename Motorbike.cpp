#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() {
    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - getTimeOfEntry();
    return static_cast<int>(duration * 0.85);
}
