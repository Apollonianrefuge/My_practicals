#include <iostream>
#include <thread>
#include <chrono>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(10); // Initialize parking lot, 10

    // Park 5 Cars
    for (int i = 1; i <= 5; ++i) {
        parkingLot.parkVehicle(new Car(i));
    }

    // Park 3 Buses
    for (int i = 6; i <= 8; ++i) {
        parkingLot.parkVehicle(new Bus(i));
    }

    // Park 2 Motorbikes
    for (int i = 9; i <= 10; ++i) {
        parkingLot.parkVehicle(new Motorbike(i));
    }

    std::this_thread::sleep_for(std::chrono::seconds(16)); // Simulate some time passing

    int overstays = parkingLot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles that have overstayed more than 15 seconds: " << overstays << std::endl;

    return 0;
}
