#include <iostream>
using namespace std;

int *readNumbers();
int secondSmallestSum(int *numbers, int length);

int main() {
    int *numbers = readNumbers();
    int result = secondSmallestSum(numbers, 10);
    cout << "Second Smallest sum is: " << result << endl;
    delete[] numbers;
    return 0;
}