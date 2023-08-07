#include <iostream>
#include <algorithm> //main func
using namespace std;

int arrayMax(double* arr, int size);

int main() {
    double saidarray[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(saidarray) / sizeof(saidarray[0]);

    int maximus = arrayMax(saidarray, size);
    cout << "Maximum value: " << maximus << endl;

    return 0;
}


int arrayMax(double* arr, int size) {
    double maximus = arr[0]; //initialise array
    for (int i = 1; i < size; i++) {
        maximus = max(maximus, arr[i]);
    }
    return static_cast<int>(maximus); //conversion from double to int
}