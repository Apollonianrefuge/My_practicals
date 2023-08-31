#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int n;
    std::cout << "Enter the number of vehicles you want to park: ";
    std::cin >> n;
    
    std::vector<Vehicle*> vehicles;

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter the type of vehicle (Car/Bus/Motorbike): ";
        std::string type;
        std::cin >> type;
        
        std::cout << "Enter the ID for this " << type << ": ";
        int id;
        std::cin >> id;

        if (type == "Car") {
            vehicles.push_back(new Car(id));
        } else if (type == "Bus") {
            vehicles.push_back(new Bus(id));
        } else if (type == "Motorbike") {
            vehicles.push_back(new Motorbike(id));
        }
    }

    for (auto vehicle : vehicles) {
        std::cout << "Vehicle with ID " << vehicle->getID()
                  << " has been parked for " << vehicle->getParkingDuration() << " seconds.\n";
    }

    // Don't forget to free the memory
    for (auto vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}