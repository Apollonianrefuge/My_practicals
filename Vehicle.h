#include <ctime>

using namespace std;

class Vehicle {
    private: 
        time_t timeOfEntry;
        int ID;

    public:
        Vehicle(int id, time_t);
        time_t getTimeOfEntry() const;
        int getID() const;
        virtual int getParkingDuration() const; //overides base class version
        const char* getReadableTimeOfEntry() const;
};