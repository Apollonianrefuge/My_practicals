#include "Person.h"

PersonList shallowCopyPersonList(PersonList peoples) {
    PersonList copiedList; //copies personlist

    copiedList.people = peoples.people;
    copiedList.numPeople = peoples.numPeople; //shallow copy, copying pointer in array

    return copiedList;
}