#include <iostream>
using namespace std; 

int *readNumbers();
bool equalsArray(int *arr1, int *arr2, int length);

int main() {
    int *arr1 = readNumbers();
    int *arr2 = readNumbers();

    bool result = equalsArray(arr1, arr2, 10);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    delete[] arr1;
    delete[] arr2;
    return 0;
}