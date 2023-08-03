#include <iostream>
#include "function-1-2.cpp"
using namespace std;

int main() {
    int matrix[10][10] = {0};
    for(int b = 0; b < 10; b++) {
        matrix[b][b] = 1;
    }

    matrix[9][6]; //diagonalelements
    matrix[5][7]; //non-diagonalelements

    int result = is_identity(matrix);

    cout << "This matrix is " << (result == 1 ? "" : "not ") << "an identity matrix." << endl;
    return 0;
}
