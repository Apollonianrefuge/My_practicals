#include <iostream>
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]) {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) { //designated variables to scan through each element of matrix{
            cout << array1[row][col] + array2[row][col] << " ";
        }
        cout << endl;
    }
}

int main();
