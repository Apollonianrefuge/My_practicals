#include <iostream>
using namespace std;
void print_pass_fail(char grade);
int main() {
    char grade;
    cout << "Enter Grade: ";
    cin >> grade; //input

    print_pass_fail(grade);

    return 0;
}