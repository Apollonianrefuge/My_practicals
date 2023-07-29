//Sum of e
#include <iostream>
using namespace std;

//func to return sum
int array_sum(int array[], int n)
{
    if (n == 0) {
        return 0;
    }
    else {
        return array[0] + array_sum(array + 1, n - 1);
    }
}
int main() {
    int array[] = { 12, 3, 4, 15 };
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Sum of E" << array_sum(array, n);
    return 0;
}