#include <iostream>
using namespace std;

int *readNumbers() {
    int *numbers = new int[10]; //memory for an array of 10 integers is dynamically allocated on the heap, stored in 'numbers'
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    return numbers;
}

void printNumbers(int *numbers,int length) {
    for (int i = 0; i < length; i++) {
        cout << i << " " << numbers[i] << endl;
    }
}

bool equalsArray(int *arr1, int *arr2, int length) {
    if (length < 1) return false;
    for (int i = 0; i < length; i++) {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}

int *reverseArray(int *arr1, int length) {
    int *reversed = new int[length];
    for (int i = 0; i < length; i++) {
        reversed[i] = arr1[length - 1 - i];
    }
    return reversed;
}