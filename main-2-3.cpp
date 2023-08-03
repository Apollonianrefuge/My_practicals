#include <iostream>
#include "function-2-3.cpp"
using namespace std;

int main() {
    int array[] = {1, 2, 2, 2, 1}; //palindrome
    int length = sizeof(array) / sizeof(array[0]); // total size in bytes in the array / size in bytes of one element of the array
    cout << "Sum is: " << sum_if_palindrome(array, length) << endl;
    return 0;
}