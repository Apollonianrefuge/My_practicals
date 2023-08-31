#include <vector>
#include "Vehicle.h"

using namespace std;

class Parkinglot {
    private:
        vector<Vehicle*> vehicles; //dynamic array
        int maxCapacity;
        int count;
    public:
        Parkinglot(int maxCapacity);
        bool parkVehicle(Vehicle* vehicle);
        int getCount() const;
        void unparkVehicle(int id);
        int countOverstayingVehicles(int maxParkingDuration);
};