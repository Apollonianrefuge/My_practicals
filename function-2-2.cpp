#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
    int dec = 0;
    int base = 1; //for loop starts at the end as rightmost digit has least value 2^0
    for(int incremental = number_of_digits - 1; incremental >= 0; incremental--) { //for loop that allows the incremental index to reduce at each iteration.
        if(binary_digits[incremental] == 1) { //if 1, add value of power to dec
            dec += base; //if 1, add value stored in base to dec
        }
        base *= 2; //multiply base by 2, moving to next power, regardless of 1 or 0
    }
    return dec;
}

int main() {
    int binary_digits[] = {1, 0, 1, 1, 1, 1, 1, 0}; //represents b2 array
    int size = sizeof(binary_digits)/sizeof(binary_digits[0]); //calculate no. of elements in binaray_digits, first part gives total size of array (bytes), second gives size of an element
    int decimal = binary_to_int(binary_digits, size); //calls function, gives two arguments stored in decimal
    cout << "The base 2 equivelant is: " << decimal << endl;
    return 0;
}