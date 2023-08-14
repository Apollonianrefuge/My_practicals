#include <iostream>
using namespace std;

int *readNumbers();
bool equalsArray(int *arr1, int *arr2, int length);
int *reverseArray(int *arr1, int length);

int main() {
    int *arr1 = readNumbers();
    int *reversedNumbers = reverseArray(arr1, 10);
    bool result = equalsArray(arr1, reversedNumbers, 10);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    delete[] arr1;
    delete[] reversedNumbers;
    return 0;
}