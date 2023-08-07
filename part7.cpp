#include <iostream>
using namespace std;

double* dynamicArray(int size, double M);
int maximumarray(double* arr, int size);

int main() {
    int N = 5;
    double M = 35.0;

    double* arr = dynamicArray(N, M);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maximus = arrayMax(arr, N);

    cout << "Maximum value in array: " << maximus << endl;

    delete[] arr;

    return 0;
}

double* dynamicArray(int size, double M) {
    double* arr = new double[size]; //allocation of memory
    for (int i = 0; i < size; i++) {
        arr[i] = M; //sets value of i-th element of array to value of M
    }
    return arr;
}

int arrayMax(double* arr, int size) {
    double maximus = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maximus) {
            maximus = arr[i];
        }
    }
    
    return static_cast<int>(maximus);
}