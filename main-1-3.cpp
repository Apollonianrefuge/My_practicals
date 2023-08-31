#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    ParkingLot lot(10);
    int id = 1;
    
    for (int i = 0; i < 5; ++i) {
        time_t currentTime = time(0);
        Vehicle* car = new Car(id++, currentTime);
        lot.parkVehicle(car);
    }

    for (int i = 0; i < 3; ++i) {
        time_t currentTime = time(0);
        Vehicle* bus = new Bus(id++, currentTime);
        lot.parkVehicle(bus);
    }

    for (int i = 0; i < 2; ++i) {
        time_t currentTime = time(0);
        Vehicle* bike = new Motorbike(id++, currentTime);
        lot.parkVehicle(bike);
    }

    // You may want to actually wait 15+ seconds here to simulate 'overstaying'
    int overstayed = lot.countOverstayingVehicles(15);
    cout << "Number of vehicles that overstayed more than 15 seconds: " << overstayed << endl;

    return 0;
}