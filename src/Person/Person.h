#ifndef PAOO_TEMA_II_PERSON_H
#define PAOO_TEMA_II_PERSON_H

#include "IPerson.h"

using namespace std;

class Person : public IPerson{
private:
    std::string name;
    int age;
    std::string school;
    std::vector<Subject> subjects;
    std::vector<ExtracurricularSubject> extracurricularSubjects;
public:
    Person(std::string name, int age);
    std::string getName() override;
    int getAge() override;
    std::string getSchool() override;
    std::vector<Subject> getSubjects() override;
    std::vector<ExtracurricularSubject> getExtracurricularSubjects() override;
    void printInfo() override;
    void setSchool(std::string newSchool) override;
    void setSubjects(std::vector<Subject> newSubjects) override;
    void setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) override;
};

#endif //PAOO_TEMA_II_PERSON_H
