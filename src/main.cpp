#include <iostream>

#include "Subject/ISubject.h"
#include "Subject/Biology.h"
#include "Subject/Chemistry.h"
#include "Person/IPerson.h"
#include "Person/Person.h"
#include "Person/Student.h"
#include "Person/Teacher.h"

using namespace std;

namespace grade_report_space
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
    std::vector<ISubject*> subjects1;
    Biology introBiology("Introductory Biology", {"Passion for plants"});
    Chemistry introChemistry("Introductory Chemistry", {"Introductory Math"});

    subjects1.push_back(&introBiology);
    subjects1.push_back(&introChemistry);

    for (auto s : subjects1){
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
    s1.setSchool("Politehnica");
    s1.setSubjects(subjects1);
    s1.addGradeForSubject(&introBiology, 10);
    s1.addGradeForSubject(&introBiology, 8);
    s1.printInfo();

    vector <tuple <ISubject*, vector<int>>> situation = s1.getScholarSituation();

    for (const auto& tuple : situation) {
        ISubject* subjectPtr = std::get<0>(tuple);
        if (subjectPtr && subjectPtr->getName() == "Introductory Biology") {
            const std::vector<int>& grades = std::get<1>(tuple);
            cout << " Biology avg: " << grade_report_space::subjectMean(grades) << endl;
            break;
        }
    }

    cout << endl << "Second student:" << endl;
    Student s2(s1);
    s1.setSchool("Tibiscus");
    s2.printInfo();

    cout << endl << "Third student:" << endl;
    Student s3(std::move(s2));
    s3.printInfo();

    s2.printInfo(); // is empty
    return 0;
}
