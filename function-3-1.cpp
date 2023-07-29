#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n) {
    if (n <= 0) {
        return false; //fan arrays cannot be 0
    }
    return array[0] == array[n - 1]; //compare first and last elements of an array
}

int main() {
    const int n = 5;
    int array[n] = {1, 2, 5, 2, 1};

    if (is_fanarray(array, n)) {
        cout << "Array is fan." << endl;
    } else {
        cout << "Not a fan array." << endl;
    }

    return 0;
}