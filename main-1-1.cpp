#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Parkinglot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    Parkinglot lot(10);  // Parking lot with a capacity of 10
    int choice;
    int id = 1;

    while (lot.getCount() < 10) {
        cout << "Choose type of vehicle to park:" << endl;
        cout << "1: Car" << endl;
        cout << "2: Bus" << endl;
        cout << "3: Motorbike" << endl;
        cout << "Choice: ";
        cin >> choice;

        time_t currentTime = time(0);  // get the current time
        Vehicle* vehicle = nullptr;

        switch (choice) {
            case 1:
                vehicle = new Car(id++, currentTime);
                break;
            case 2:
                vehicle = new Bus(id++, currentTime);
                break;
            case 3:
                vehicle = new Motorbike(id++, currentTime);
                break;
            default:
                cout << "Invalid choice, try again." << endl;
                continue;
        }

        if (!lot.parkVehicle(vehicle)) {
            delete vehicle;
        }
    }

    cout << "Enter ID of vehicle to unpark: ";
    int unparkID;
    cin >> unparkID;
    lot.unparkVehicle(unparkID);

    return 0;
}
