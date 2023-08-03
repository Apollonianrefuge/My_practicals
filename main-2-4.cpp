#include <iostream>
#include "function-2-4.cpp"
using namespace std;

int main() {
    int array[] = {1, 4, 8, 16, 32, 64, 128};
    int length = sizeof(array) / sizeof(array[0]);

    cout << "Sum of min and max: " << sum_min_max(array, length) << endl;

    return 0;
}