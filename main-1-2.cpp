#include <iostream>
using namespace std;
double array_mean(int array[], int n);
int main () {

    int array[] = { 98, 23, 88, 92, 108 };
    int n = sizeof(array) / sizeof(array[0]);

    cout << array_mean(array, n) << endl;
    return 0;
}