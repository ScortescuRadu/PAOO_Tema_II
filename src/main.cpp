#include <iostream>

#include "Subject/ISubject.h"
#include "Subject/Biology.h"
#include "Subject/Chemistry.h"
#include "Person/IPerson.h"
#include "Person/Person.h"
#include "Person/Student.h"
#include "Person/Teacher.h"
#include "PointerManager/Shared_ptr.h"

using namespace std;
using namespace biology;
using namespace chemistry;
using namespace student;
using namespace my_pointer;

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
    biology::Biology introBiology("Introductory Biology", {"Passion for plants"});
    chemistry::Chemistry introChemistry("Introductory Chemistry", {"Introductory Math"});

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
    Student s3(s2);
    s3.printInfo();

    cout << endl << "Fourth student:" << endl;
    Student s4(std::move(s3));
    s4.printInfo();

    cout << endl << "Third student again:" << endl;
    s3.printInfo();

    //////////////////////////
    /////// Tema III ////////
    ////////////////////////

    // student0 pointing to a Student Object
    my_pointer::Shared_ptr<Student> student0(new Student("David", 20));

    cout << "\nstudent0 Shared_pointer: \n";
    student0->setSchool("Politehnica");
    cout << " Student0's school: " << student0->getSchool() << endl;

    {
        // student1 pointing to student0
        // which ptr1 is pointing to
        // Shared pointer reference counter
        // should have increased now to 2.
        my_pointer::Shared_ptr<Student> student1 = student0;
        cout << " Student1's school: " << student1->getSchool() << endl;
        {
            // student2 pointing to student0
            // Shared pointer reference counter
            // should have increased now to 3.
            my_pointer::Shared_ptr<Student> student2(student0);
            cout << " Student2's school: " << student2->getSchool() << endl;
        }

        // student2 is out of scope.
        // It would have been destructed.
        // So shared pointer reference counter
        // should have decreased now to 2.
        cout << "\nShared object's count now: " << student0.use_count() << endl;
    }

    // student1 is out of scope.
    // It would have been destructed.
    // So shared pointer reference counter
    // should have decreased now to 1.
    cout << " Student0's school: " << student0->getSchool() << endl;


    std::unique_ptr<Student> unique_student0 (new Student("Popescu", 22));
    unique_student0->setSchool("UVT");
    cout << "\nunique_student0's school: " << unique_student0->getSchool() << endl;

    // Error: can't copy unique_ptr
    // std::unique_ptr<Student> unique_student2 = unique_student0;

    // Works, resource now stored in ptr2
    std::unique_ptr<Student> unique_student3 = std::move(unique_student0);
    cout << "unique_student3's school: " << unique_student3->getSchool() << endl;

    return 0;
}
