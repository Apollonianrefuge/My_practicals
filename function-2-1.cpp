#include <iostream>
#include <string> //using strings within program
using namespace std;

//function transforming positive integer decimal number (b10) to binary, (b2)
//print result, string has at least 1, no > 9, each digit, 0-9 << input, output should only be binary
//convert string to int

string baseconversion(int base10) {
    string decimal_number = "";
    while(base10 > 0) {
        decimal_number = to_string(base10 % 2) + decimal_number;
        base10 /= 2; //conversion math from base 10 to 2
    }
    return decimal_number;
}

void print_binary_str(string decimal_number) {
    if(decimal_number.length() > 0 && decimal_number.length() <= 9) { //satisdy the 0-9 constraint put on the digits
        cout << decimal_number << endl;
    }
}

int main();