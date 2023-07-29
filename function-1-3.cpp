#include <iostream>
using namespace std;

int num_count(int array[], int n, int number) {
    if (n < 1) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] == number) {
            count++;
        }
    }

    return count;
}

int main() {
    const int size = 9; 
    int arr[size] = {100, 3, 9, 2, 1, 5, 2, 7}; 
    int desiredNumber = 2; 

    int occurrences = num_count(arr, size, desiredNumber);
    cout << "The number of occurrences of " << desiredNumber << " is: " << occurrences << endl;

    return 0;
}