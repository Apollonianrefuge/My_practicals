#include "Person.h"

PersonList createPersonList(int n) {
    PersonList personList; //create obj, set numppl to n, dynamically allocate n.
    personList.numPeople = n;
    personList.people = new Person[n];

    for(int i = 0; i < n; i++) {
        personList.people[i].name = "Jane Doe";
        personList.people[i].age = 1;
    }

    return personList;
}


PersonList shallowCopyPersonList(PersonList peoples) {
    PersonList copiedList; //copies personlist

    copiedList.people = peoples.people;
    copiedList.numPeople = peoples.numPeople; //shallow copy, copying pointer in array

    return copiedList;
}