#include <iostream>
#include "function-1-5.cpp"
using namespace std;

int main() {
    int matrix0[3][3] = {
    {1, 3, 6},
    {4, 6, 8},
    {9, 8, 1}
    };

    int matrix1[3][3] = {
        {10, 11, 12},
        {3, 6, 10},
        {1, 8, 19}
    };

    
    print_summed(matrix0, matrix1);

    return 0;
}