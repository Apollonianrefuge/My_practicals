#include <iostream>
using namespace std;

int main() {
    double meDoublae = 88.4;
    char mecharae = 'A';

    double* ptr1;
    char* ptr2;

    ptr1 = &meDoublae; //pointers are designed to be points within memory of code that can be definied by using a pointer
    ptr2 = &mecharae;

    cout << "Value of Double: " << *ptr1 << endl;
    cout << "Value of Character: " << *ptr2 << endl;

    return 0;
}
