#include "Person.h"

Person *createPersonArray(int n) {
    Person *personArray = new Person[n];
    for(int i = 0; i < n; i++) {
        personArray[i].name = "John Doe";
        personArray[i].age = 0;
    }
    return personArray;
}