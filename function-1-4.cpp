#include <iostream>
using namespace std;

void print_scaled(int array[3][3],int scale) {

    for(int row = 0; row < 3; row++) { //once again, scans each element
        for(int col = 0; col < 3; col++) {
            cout << array[row][col] * scale << " "; // multiplication of scalar and matrix
        }
        cout << endl;
    } //matrix given is 3x3
}

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