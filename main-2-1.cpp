#include <iostream>
#include "function-2-1.cpp"
using namespace std;

int main() {
    int base10;
    cout << "Enter a number of base 10: ";
    cin >> base10;
    string decimal_number = baseconversion(base10);
    print_binary_str(decimal_number); //function call to print binary, b2.
    return 0;
}