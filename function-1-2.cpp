#include <iostream>
using namespace std;

//need function to check 10x10 array is in fact an identity matrix,
int is_identity(int array[10][10]) {
    for(int a = 0; a < 10; a++) { //a serves as loop over each row within matrix
        for(int b = 0; b < 10; b++) { //serves as loop over each column within matrix
            if (a == b && array[a][b] != 1) {
                return 0;
            }
            if(a != b && array[a][b] != 0) {
                return 0;
            }

        }
    }

    return 1; //conclusion of function, scane each element in matrix row and column sequentially, 
    //adding a 1 in each diagonal element
}

int main();