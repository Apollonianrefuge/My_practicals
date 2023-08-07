#include <iostream>
#include <cstdlib>
using namespace std;

double* dynamicArray(int size);
int arrayMax(double* array, int size);

int main() {
    int N = 10; //size of array
    double* array = dynamicArray(N);
    int maximus = arrayMax(array, N);

    cout << "The maximum value is: " << maximus << endl;

    delete[] array; //ensures memory is returned to system, preventing memory leaks
//memory leak will happen if forgotten, code will not run.
    return 0;
}

double* dynamicArray(int size) {
    double* array = new double[size];
    for (int i = 0; i < size; i++) {
        array[i] = (rand() % 101);
    }

    return array;
}

int arrayMax(double* array, int size) {
    double maximus = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > maximus) {
            maximus = array[i];
        }
    }

    return static_cast<int>(maximus);
}

