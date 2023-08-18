#include <iostream>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n);
PersonList deepCopyPersonList(PersonList peoples);

int main() {
    int n = 5; 
    PersonList originalList = createPersonList(n);

    cout << "Original List: " << endl;
    for(int i = 0; i < originalList.numPeople; i++) {
        cout << "person: " << (i+1) << " Name: " << originalList.people[i].name << " Age:" << originalList.people[i].age << endl;
    }

    PersonList copiedList = deepCopyPersonList(originalList);
    delete[] originalList.people;
    delete[] copiedList.people;
    return 0;
}