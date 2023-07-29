//average of all elements in int array
#include <iostream>
using namespace std;

double array_mean(int array[], int n)
{
//average = sum of E/total number of E
//sum
    int sum = 0;
    for (int i = 0; i < n; i++)
    sum += array[i];

    return (double)sum / n;
}

//input main, array, division of sum and N
int main()
{
    int array[] = { 98, 23, 88, 92, 108 };
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Average of array: " << array_mean(array, n) << endl;
    return 0;
}