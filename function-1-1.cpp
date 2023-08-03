#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4]) {
    int sum = 0; //initialisation
    for(int i = 0; i < 4; i++) { //for loop, initalise variable i, loop counter.
    //i<4 is the condition of the for loop, loop continues unless i>4, and finally,
    //i++ iterative expression, updating loop counter
        sum += array[i][i]; //line executes with each iteration as stated by {} 
    } //accesses the i'th row and the i'th column element of the array. first i represents row, second column
    return sum; //sum + sum, adding current diagonal element to following diagonal elements
}

int main();