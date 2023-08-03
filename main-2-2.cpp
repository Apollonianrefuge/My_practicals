#include <iostream>
#include "function-2-2.cpp"
using namespace std;

int main() {
    int binary_digits[] = {1, 0, 1, 1, 1, 1, 1, 0}; //represents b2 array
    int size = sizeof(binary_digits)/sizeof(binary_digits[0]); //calculate no. of elements in binaray_digits, first part gives total size of array (bytes), second gives size of an element
    int decimal = binary_to_int(binary_digits, size); //calls function, gives two arguments stored in decimal
    cout << "The base 2 equivelant is: " << decimal << endl;
    return 0;
}