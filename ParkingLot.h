#include <vector>
#include "Vehicle.h"

using namespace std;

class ParkingLot {
    private:
        vector<Vehicle*> vehicles; //dynamic array
        int maxCapacity;
        int count;
    public:
        ParkingLot(int maxCapacity);
        bool parkVehicle(Vehicle* vehicle);
        int getCount() const;
        void unparkVehicle(int id);
        int countOverstayingVehicles(int maxParkingDuration);
};