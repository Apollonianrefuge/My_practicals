#include <iostream>
#include <cstdlib> //random number lib
using namespace std;

double* dynamicArray(int size);

int main() {
    int N = 5;
    double* arr = dynamicArray(N);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr; //deallocation of memory
    return 0;
}

double* dynamicArray(int size) {
    double* arr = new double[size];
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 101);
    }
    
    return arr;
}