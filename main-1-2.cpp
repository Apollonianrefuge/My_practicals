#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(10); // Initialize parking lot with a capacity of 10
    char type;
    int id = 1;
    while (parkingLot.getCount() < 10) {
        std::cout << "Enter the type of vehicle you want to park (C for Car, B for Bus, M for Motorbike): ";
        std::cin >> type;
        Vehicle* vehicle;
        if (type == 'C') {
            vehicle = new Car(id);
        } else if (type == 'B') {
            vehicle = new Bus(id);
        } else if (type == 'M') {
            vehicle = new Motorbike(id);
        } else {
            std::cout << "Invalid type. Try again." << std::endl;
            continue;
        }
        parkingLot.parkVehicle(vehicle);
        id++;
    }

    int unparkId;
    std::cout << "Enter the ID of the vehicle you want to unpark: ";
    std::cin >> unparkId;
    parkingLot.unparkVehicle(unparkId);

    return 0;
}
