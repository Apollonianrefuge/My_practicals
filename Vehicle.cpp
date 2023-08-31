#include "Vehicle.h"

// Constructor implementation
Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr);
}

// Getter for timeOfEntry
std::time_t Vehicle::getTimeOfEntry() const {
    return timeOfEntry;
}

// Getter for ID
int Vehicle::getID() const {
    return ID;
}