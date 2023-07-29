#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
    switch (grade) { //switcher to switch between grades
        case 'A':
        case 'B':
        case 'C':
            cout << "Pass" << endl;
            break;
        case 'D': // fail is D or F
        case 'F':
            cout << "Fail" << endl;
            break; 
    }
}

int main() {
    char grade;
    cout << "Enter Grade: ";
    cin >> grade; //input

    print_pass_fail(grade);

    return 0;
}