#include <iostream>
using namespace std;

int array_min(int integers[], int length) {
    if(length <= 0) { //length check
        return -1;
    }

    int minimum = integers[0];
    for(int value = 1; value < length; value++) {
        if(integers[value] < minimum) {
            minimum = integers[value]; //scan arrray, if element less than minimum, update minimum
        }
    }
    return minimum;
}

int array_max(int integers[], int length) {
    if(length <= 0) {
        return -1;
    }

    int maximum = integers[0]; 
    for(int value = 1; value < length; value++) {
            if(integers[value] > maximum) {
                maximum = integers[value];
        }
    }

    return maximum;
}

int sum_min_max(int integers[], int length) {
    if(length <= 0) {
        return -1; //pos length? if not, -1
    }
    int minimum = array_min(integers, length);
    int maximum = array_max(integers, length);
    return minimum + maximum;
}

int main();