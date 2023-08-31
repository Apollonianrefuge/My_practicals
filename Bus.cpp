#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() {
    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - getTimeOfEntry();
    return static_cast<int>(duration * 0.75);
}