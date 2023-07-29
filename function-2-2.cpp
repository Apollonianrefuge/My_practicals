#include <iostream>
using namespace std;

int max_element(int array[], int n) {
    int large = array[0]; //first element = largest
//loop to find largest element throughout array
    for (int i = 1; i < n; i++) {
        if (array[i] > large) {
            large = array[i]; //update to largest element from previous largest element

        }
    }

    return large;
}

int main() {
    const int n = 5; // constant amount of elements in array
    int array[n] = {80, 23, 108, 208, 93};
    int biggest = max_element(array, n);
    cout << "Largest element: " << biggest << endl;

    return 0;
}