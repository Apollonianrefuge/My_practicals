#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Car.h"

using namespace std;

int main() {
    ParkingLot lot(10);
    time_t currentTime = time(0);  // get the current time

    // Park a car with ID=1 and current time of entry
    Vehicle* car = new Car(1, currentTime);
    lot.parkVehicle(car);

    cout << "Current count of vehicles: " << lot.getCount() << endl;

    // Unpark the car with ID=1
    lot.unparkVehicle(1);
    cout << "Current count of vehicles: " << lot.getCount() << endl;

    return 0;
}