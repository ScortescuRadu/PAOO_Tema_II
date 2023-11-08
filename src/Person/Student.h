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
    std::vector<ISubject*> subjects;
    std::vector<ExtracurricularSubject> extracurricularSubjects;
    vector <tuple <ISubject*, vector<int>>> scholarSituation;

public:
    Student(std::string name, int age);
    Student(Student&& other) noexcept;
    Student(const Student& other);
    ~Student();

    std::string getName() override;
    int getAge() override;
    std::string getSchool() override;
    std::vector<ISubject*> getSubjects() override;
    std::vector<ExtracurricularSubject> getExtracurricularSubjects() override;
    vector <tuple <ISubject*, vector<int>>> getScholarSituation();

    void printInfo() override;
    void setSchool(std::string newSchool) override;
    void setSubjects(std::vector<ISubject*> newSubjects) override;
    void setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) override;
    void setScholarSituation(vector <tuple <ISubject*, vector<int>>> newScholarSituation);
    void addGradeForSubject(ISubject* subject, int grade);
};

#endif //PAOO_TEMA_II_STUDENT_H
