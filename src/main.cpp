#include <iostream>

#include "Subject/ISubject.h"
#include "Subject/Biology.h"
#include "Subject/Chemistry.h"
#include "Person/IPerson.h"
#include "Person/Person.h"

using namespace std;

int main() {
    Biology introBiology = *new Biology("Introductory Biology", {"sdf"});
    Chemistry introChemistry = *new Chemistry("Introductory Chemistry", {"asd"});

    ISubject* subjects[] = {&introBiology, &introChemistry};

    for (auto s : subjects){
        cout << s -> getName() << std::endl;
    }

    Person person1 = *new Person("Ana", 20);
    Person person2 = *new Person("Maria", 21);

    IPerson* persons[] = {&person1,&person2};
    for (auto p:persons) {
        p->printInfo();
        cout << std::endl;
    }
    return 0;
}
