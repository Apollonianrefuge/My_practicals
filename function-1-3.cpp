#include "Person.h"

PersonList deepCopyPersonList(PersonList peoples) {
    PersonList newPersonList;
    newPersonList.numPeople = peoples.numPeople;
    newPersonList.people = new Person[peoples.numPeople];

    for(int i = 0; i < peoples.numPeople; i++) {
        newPersonList.people[i].name = peoples.people[i].name;
        newPersonList.people[i].age = peoples.people[i].age;
    }

    return newPersonList;
}

