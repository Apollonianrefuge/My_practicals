#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length) { //function def, takes array of int, length of array, return bool
    if(length <= 0) { //check <=0 length of array
        return false;
    }
    for(int arr = 0; arr < length / 2; arr++) { //loop half/half check, palnidrome assessment
        if(integers[arr] != integers[length - 1 - arr]) { //second half from end to middle
            return false;
        }
    }

    return true;
}

int sum_array_elements(int integers[], int length) {
    int summation = 0;
    for(int arr = 0; arr < length; arr++) {
        summation += integers[arr]; //summation of elements within array
    }
    return summation;
}

int sum_if_palindrome(int integers[], int length) {
    if(length <= 0) {
        return false; //is palindrom + positive length? if not return false
    }
    if(is_palindrome(integers, length)) { //check if palindrome, if so, continue
        return sum_array_elements(integers, length); //sum elements
    } else {
        return -2; // if not palindrome
    }
}

int main() {
    int array[] = {1, 2, 2, 2, 1}; //palindrome
    int length = sizeof(array) / sizeof(array[0]); // total size in bytes in the array / size in bytes of one element of the array
    cout << "Sum is: " << sum_if_palindrome(array, length) << endl;
    return 0;
}