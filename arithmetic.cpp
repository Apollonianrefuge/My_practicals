//addition function of binary arithmetic
#include <iostream>
using namespace std;
string addbin(string a, string b) {
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry) { // performing addition bit by bit from right to left, this is carrying the sum of two bits if sum> 1, column change
        int sum = carry;
        if (i>= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result = to_string(sum % 2) + result;
        carry = sum / 2;
    }

    return result;
}

int main() {
    string num1, num2; // stores input of binary numbers
    cout << "Enter 1st binary number: ";
    cin >> num1;
    cout << "Enter 2nd binary number: ";
    cin >> num2;

    string sum = addbin(num1, num2); //performs binary addition, result stored in sum
    cout << "Sum: " << sum << endl;

    return 0;
}