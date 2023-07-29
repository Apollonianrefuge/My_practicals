#include <iostream>
using namespace std;
int min_element(int array[], int n);
int main() {
    const int n = 8;
    int array[n] = {10, 8, 6, 92, 83, 1, 3, 8};

    int smoll = min_element(array, n); {
        cout << "Smallest element: " << smoll << endl;
    }

    return 0;
}
