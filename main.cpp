#include <iostream>
using namespace std;

void changeValue(double*) {
    double doublae = 44; //the double would remain as 44 rather then 42 if not passed
    double* ptr; 
    ptr = &doublae;
    *ptr = 42.0; //pointers access the location of the double within the allocated memory for the program, passing a pointer allows the pointer to assort this memory in a specific location
    cout << "Value of double: " << doublae << endl;
}

void printArray(double*array, int size) {
    double saidarray[] = {10, 20, 30, 40, 50}; //size is necessary to determine dimensions of array
    int size = sizeof(saidarray) / sizeof(saidarray[0]); //allowing us to create a formula from said dimensions 
    printArray(saidarray, size); //use a call function to pass an array to function in c++    
}

{
    double saidarray[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(saidarray) / sizeof(saidarray[0]);

    int maximus = arrayMax(saidarray, size);
    cout << "Maximum value: " << maximus << endl;

    return 0;
}

{
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
