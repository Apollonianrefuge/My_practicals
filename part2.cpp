#include <iostream>
using namespace std;

void changeValue(double*) {
    double doublae = 44; //the double would remain as 44 rather then 42 if not passed
    double* ptr; 
    ptr = &doublae;
    *ptr = 42.0; //pointers access the location of the double within the allocated memory for the program, passing a pointer allows the pointer to assort this memory in a specific location
    cout << "Value of double: " << doublae << endl;
}

