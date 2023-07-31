#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//libraries required to perform transformative algorithm
//first parameter of type string&, constant string, number is ref to a string
int ctd(const string& realnumber, int base) { //function definition, conver number in base to equiv. decimal.
    int decv = 0;
    int pwr = 1; //initialization

    for (int i = realnumber.length() - 1; i >= 0; i--) {
        int digv; //initialization
        if (isdigit(realnumber[i])) {
            digv = realnumber[i] - '0';
        } else {
            digv = realnumber[i] - 'A' + 10;
        }
        decv += digv * pwr;
        pwr *= base;
    }
    
    return decv;
}
//this function converts a number from any base to decimal form, base 10.
//now to convert a decimal to any base;
string ctb(int decv, int base) {
    string result = "";

    while (decv > 0) {
        int remainder = decv % base; //begin divisions of decimal value from base value
        char digit; // define character variable, will hold individual digits during base conversion
        if (remainder < 10) {
            digit = '0' + remainder;
        } else {
            digit = 'A' + (remainder - 10);
        }
        result = digit + result;
        decv /= base;
    }

    return result;
}

int main() {
    string realnumber;
    int frombase, tobase;

    cout << "Enter original number: ";
    cin >> realnumber;

    cout << "Enter base of original number: ";
    cin >> frombase;

    cout << "Enter desired base: ";
    cin >> tobase;

    int decv = ctd(realnumber, frombase);
    string result = ctb(decv, tobase);

    cout << "The number in base " << tobase << " is: " << result << endl;

    return 0;
}