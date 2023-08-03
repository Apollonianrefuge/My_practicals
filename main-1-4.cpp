#include <iostream>
#include "function-1-4.cpp"
using namespace std;

int main() {
    int matrix[3][3] = {
        {4, 8, 9},
        {2, 3, 9},
        {5, 8, 18}
    };

    int scale = 2;

    print_scaled(matrix, scale);

    return 0;
}