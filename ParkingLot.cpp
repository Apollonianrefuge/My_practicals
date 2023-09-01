#include "ParkingLot.h"
#include <iostream>
#include <ctime>

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), count(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for(int i = 0; i < count; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() {
    return count;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if(count >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return false;
    }
    vehicles[count++] = vehicle;
    return true;
}

void ParkingLot::unparkVehicle(int id) {
    for(int i = 0; i < count; ++i) {
        if(vehicles[i]->getID() == id) {
            delete vehicles[i];
            vehicles[i] = vehicles[--count];
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int overstayingCount = 0;
    std::time_t currentTime;
    std::time(&currentTime);
    
    for(int i = 0; i < count; ++i) {
        if((currentTime - vehicles[i]->getTimeOfEntry()) > maxParkingDuration) {
            overstayingCount++;
        }
    }
    return overstayingCount;
}
