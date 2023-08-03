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

int main();