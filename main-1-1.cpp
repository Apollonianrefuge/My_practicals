#include <iostream>
#include "function-1-1.cpp"
using namespace std;

int main() {
    int matrix[4][4] = {{1, 3, 5, 9}, {2, 5, 6, 2}, {9, 8, 6, 2}, {16, 17, 18, 19}};
    //created 2d array, from left to right row 1 - 4
    int sum = sum_diagonal(matrix);
    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}