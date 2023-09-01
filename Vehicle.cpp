#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr);
}

Vehicle::~Vehicle() {
    // Virtual destructor definition
}

int Vehicle::getID() const {
    return ID;
}

std::time_t Vehicle::getTimeOfEntry() const {
    return timeOfEntry;
}
