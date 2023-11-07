#ifndef PAOO_TEMA_II_STUDENT_H
#define PAOO_TEMA_II_STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

using namespace std;

class Student : public Person{
private:
    std::string name;
    int age;
    std::string school;
    std::vector<Subject> subjects;
    std::vector<ExtracurricularSubject> extracurricularSubjects;
    vector <tuple <Subject, vector<int>>> scholarSituation;

public:
    Student(std::string name, int age);
    Student(Student&& other) noexcept;
    Student(const Student& other)
            : Person(other), // Call the base class's copy constructor
              name(other.name),
              age(other.age),
              school(other.school),
              subjects(other.subjects),
              extracurricularSubjects(other.extracurricularSubjects),
              scholarSituation(other.scholarSituation) {};
    ~Student() {};

    std::string getName() override;
    int getAge() override;
    std::string getSchool() override;
    std::vector<Subject> getSubjects() override;
    std::vector<ExtracurricularSubject> getExtracurricularSubjects() override;
    vector <tuple <Subject, vector<int>>> getScholarSituation();

    void printInfo() override;
    void setSchool(std::string newSchool) override;
    void setSubjects(std::vector<Subject> newSubjects) override;
    void setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) override;
    void setScholarSituation(vector <tuple <Subject, vector<int>>> newScholarSituation);
    void addGradeForSubject(Subject subject, int grade);
};

#endif //PAOO_TEMA_II_STUDENT_H
