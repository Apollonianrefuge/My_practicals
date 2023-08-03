#include <iostream>
#include <vector> //vector library allows dynamism of 2D-array
using namespace std;
//matrix of integers, count each time 0,1,2,3,4,5,6,7,8,9 appears, yes
//scan each element, cateogorise it into variables rangeing 0 to 9
//print out each variable, count each number, no sum on sum
void count_digits(vector<vector<int>>& matrix) {
    vector< int>counts(10, 0); //initialisation

    for(auto& row : matrix) {
        for(auto& digit : row) {
            if(digit >= 0 && digit <= 9) {
                counts[digit]++;
            }
        }
    }

    //count print
    for(int a = 0; a < 10; a++) {
        cout << a << ":" << counts[a] << ";"; 
    }
    cout << endl;
}

int main();