#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter the number of Cars: ";
    std::cin >> numCars;
    std::cout << "Enter the number of Buses: ";
    std::cin >> numBuses;
    std::cout << "Enter the number of Motorbikes: ";
    std::cin >> numMotorbikes;

    std::vector<Vehicle*> vehicles;
    for (int i = 0; i < numCars; ++i) {
        vehicles.push_back(new Car(i));
    }
    for (int i = 0; i < numBuses; ++i) {
        vehicles.push_back(new Bus(i));
    }
    for (int i = 0; i < numMotorbikes; ++i) {
        vehicles.push_back(new Motorbike(i));
    }

    for (auto vehicle : vehicles) {
        if (Car* car = dynamic_cast<Car*>(vehicle)) {
            std::cout << "Car ID: " << car->getID() << " Parking duration: " << car->getParkingDuration() << std::endl;
        }
        else if (Bus* bus = dynamic_cast<Bus*>(vehicle)) {
            std::cout << "Bus ID: " << bus->getID() << " Parking duration: " << bus->getParkingDuration() << std::endl;
        }
        else if (Motorbike* motorbike = dynamic_cast<Motorbike*>(vehicle)) {
            std::cout << "Motorbike ID: " << motorbike->getID() << " Parking duration: " << motorbike->getParkingDuration() << std::endl;
        }
        delete vehicle;
    }

    return 0;
}
