#include <iostream>

#include "Subject/ISubject.h"
#include "Subject/Biology.h"
#include "Subject/Chemistry.h"
#include "Person/IPerson.h"
#include "Person/Person.h"
#include "Person/Student.h"
#include "Person/Teacher.h"

using namespace std;

namespace first_space
{
    int subjectMean(const vector<int>& grades)
    {
        int sum = 0;
        std::size_t numberOfElements = grades.size();
        if (numberOfElements != 0)
        {
            for (auto it : grades)
                sum += it;
            return sum / numberOfElements;
        }
        return 0;
    }
}

int main() {
    Biology introBiology = *new Biology("Introductory Biology", {"sdf"});
    Chemistry introChemistry = *new Chemistry("Introductory Chemistry", {"asd"});

    ISubject* subjects[] = {&introBiology, &introChemistry};

    for (auto s : subjects){
        cout << s -> getName() << std::endl;
    }

    Person person1("Ana", 20);
    Person person2("Maria", 21);

    IPerson* persons[] = {&person1,&person2};
    for (auto p:persons) {
        p->printInfo();
        cout << std::endl;
    }

    Student s1("Ana", 20);
    Student s2("Maria", 21);
    s1.setSchool("Politehnica");
    s1.printInfo();
    return 0;
}
