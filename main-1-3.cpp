#include <iostream>
#include <unistd.h>  //sleep function
#include "Vehicle.h"
#include "Parkinglot.h"

int main() {
    Parkinglot lot(10);
    int id = 1;
    int typeCounts[3] = {5, 3, 2};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < typeCounts[i]; j++) {
            Vehicle *vehicle = nullptr;

            if (i == 0) {
                vehicle = new Car(id++);
            } else if (i == 1) {
                vehicle = new Bus(id++);
            } else if (i == 2) {
                vehicle = new Motorbike(id++);
            }
            if (vehicle) {
                if (!lot.parkVehicle(vehicle)) {
                    delete vehicle;
                }
            }
        }
    }
    cout << "Waiting for 16 seconds..." << endl;
    sleep(16);

    int overstayingCount = lot.countOverstayingVehicles(15);
    cout << "Number of vehicles overstaying: " << overstayingCount << endl;

    return 0;
}