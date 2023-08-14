#include <iostream>
#include <vector>
#include <algorithm>
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

int secondSmallestSum(int *numbers, int length) {
    vector<int> sums;
    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            sums.push_back(sum); //nest
        }
    }
    sort(sums.begin(), sums.end());
    return sums[1];
}

