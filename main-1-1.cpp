#include <iostream>
#include "Vehicle.h"

using namespace std;

int main() {
    Car car(1);
    Bus bus(2);
    Motorbike motorbike(3);

    cout << " Car has been parked for: " << car.getParkingDuration() << " seconds." << endl;
    cout << " Bus has been parked for: " << bus.getParkingDuration() << " seconds." << endl;
    cout << " Motorbike has been parked for " << motorbike.getParkingDuration() << " seconds." << endl;

    return 0;
}