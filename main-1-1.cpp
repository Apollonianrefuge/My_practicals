#include <iostream>
using namespace std;
int array_sum(int array[], int n);
int main() {
    int array[] = { 12, 3, 4, 15 };
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Sum of Elements: " << array_sum(array, n);
    return 0;
}