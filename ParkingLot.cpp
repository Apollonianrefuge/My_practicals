#include "ParkingLot.h"
#include <iostream>
#include <ctime>

using namespace std;

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), count(0) {
    vehicles.reserve(maxCapacity); // pre-allocation of memory for max no. of vehicles
}

ParkingLot::~ParkingLot() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }
}

int ParkingLot::getCount() const {  // Corrected the name
    return count; // Corrected variable name
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) { // Added bool return type
    if (count < maxCapacity) {
        vehicles.push_back(vehicle);
        count++; // Corrected variable name
        return true;
    } else {
        cout << "Lot is full!" << endl;
        return false;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (auto park = vehicles.begin(); park != vehicles.end(); ++park) {
        if ((*park)->getID() == id) {
            delete *park;
            vehicles.erase(park);
            count--; // Corrected variable name
            return;
        }
    }
    cout << "Vehicle not within lot." << endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int overstayingCount = 0; // Initialize
    for (Vehicle* vehicle : vehicles) {
        int parkingDuration = vehicle->getParkingDuration();
        if (parkingDuration > maxParkingDuration) {
            overstayingCount++; // Increment the counter
        }
    }
    return overstayingCount; // Return the count instead of 0
}