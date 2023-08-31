#include <ctime>

using namespace std;

class Vehicle {
    private: 
        time_t timeOfEntry;
        int ID;

    public:
        Vehicle(int id);
        time_t getTimeOfEntry() const;
        int getID() const;
        virtual int getParkingDuration() const; //overides base class version
        const char* getReadableTimeOfEntry() const;
};

class Car : public Vehicle {
    public:
        Car(int id);
        int getParkingDuration() const override;
};

class Bus : public Vehicle {
    public:
        Bus(int id);
        int getParkingDuration() const override;
};

class Motorbike : public Vehicle {
    public:
        Motorbike(int id);

        int getParkingDuration() const override;
};