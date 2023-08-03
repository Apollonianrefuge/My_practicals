#include <iostream>
#include "function-1-3.cpp"
using namespace std;

int main() {
    vector<vector<int>>matrix = {
        {8, 9, 3},
        {9, 9, 9},
        {4, 5, 7},
    };

    count_digits(matrix);
    return 0;
}
