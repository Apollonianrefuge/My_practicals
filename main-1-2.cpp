#include <iostream>
#include "Vehicle.h"
#include "Parkinglot.h"
#include "Car.h"

using namespace std;

int main() {
    Parkinglot lot(10); //capacity of parking lot
    int choice;
    int id = 1; //initialise

    while (lot.getCount() < 10) { //choices
        cout << "Choose type of vehicle to park:" << endl;
        cout << "1: Car" << endl;
        cout << "2: Bus" << endl;
        cout << "3: Motorbike" << endl;
        cout << "Choice: " << endl;
        cin >> choice;

        Vehicle* vehicle = nullptr; //initilise

        switch (choice) {
            case 1:
                vehicle = new Car(id++);
                break;
            case 2:
                vehicle = new Bus(id++);
                break;
            case 3:
                vehicle = new Motorbike(id++);
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
                continue;
        }
        lot.parkVehicle(vehicle);
    }
    cout << "Enter ID of vehicle to unpark: " << endl;
    int unparkID;
    cin >> unparkID;

    lot.unparkVehicle(unparkID);

    return 0;
}