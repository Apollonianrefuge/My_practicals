#include <iostream>
using namespace std;

int min_element(int array[], int n) {
    int smolboi = array[0]; //assumes first is smallest

//loop to scan array for small numbers
    for (int i = 1; i < n; i++) {
        if (array[i] < smolboi) {
            smolboi = array[i]; //update after scan of array
        }
    }

    return smolboi;
}

int main() {
    const int n = 8;
    int array[n] = {10, 8, 6, 92, 83, 1, 3, 8};

    int smoll = min_element(array, n); {
        cout << "Smallest element: " << smoll << endl;
    }

    return 0;
}
