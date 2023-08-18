#include <iostream>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList peoples);

int main() {
    int n = 5;
    PersonList originalList = createPersonList(n);

    cout << "Original List:" << endl;
    for(int i = 0; i < originalList.numPeople; i++) {
        cout << "Person: " << (i+1) << " Name: " << originalList.people[i].name << " Age: " << originalList.people[i].age << endl;
    }

    PersonList copiedList = shallowCopyPersonList(originalList);
    cout << "\nCopied List: " << endl; //new line to organise
    for(int i = 0; i < copiedList.numPeople; i++) {
        cout << "Person: " << (i+1) << " Name: " << copiedList.people[i].name << " Age: " << copiedList.people[i].age << endl;
    }

    delete[] originalList.people;

    return 0;
}