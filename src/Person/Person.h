#ifndef PAOO_TEMA_II_PERSON_H
#define PAOO_TEMA_II_PERSON_H

#include "IPerson.h"

using namespace std;

class Person : public IPerson{
private:
    std::string name;
    int age;
    std::string school;
    std::vector<ISubject*> subjects;
    std::vector<ExtracurricularSubject> extracurricularSubjects;
public:
    Person(std::string name, int age);
    Person(Person&& other) noexcept;
    Person(const Person& other)
            : name(other.name),
              age(other.age),
              school(other.school),
              subjects(other.subjects),
              extracurricularSubjects(other.extracurricularSubjects) {};
    Person();
    ~Person();

    std::string getName() override;
    int getAge() override;
    std::string getSchool() override;
    std::vector<ISubject*> getSubjects() override;
    std::vector<ExtracurricularSubject> getExtracurricularSubjects() override;
    void printInfo() override;
    void setSchool(std::string newSchool) override;
    void setSubjects(std::vector<ISubject*> newSubjects) override;
    void setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) override;
};

#endif //PAOO_TEMA_II_PERSON_H
