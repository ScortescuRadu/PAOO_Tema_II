#include "Person.h"

Person::Person(std::string name, int age):name(name),age(age) {cout << endl << "Person created";};

Person::Person(Person&& other) noexcept
        : name(std::move(other.name)),
          age(other.age),
          school(std::move(other.school)),
          subjects(std::move(other.subjects)),
          extracurricularSubjects(std::move(other.extracurricularSubjects)) {
    other.age = 0;
    other.subjects.clear();
    other.extracurricularSubjects.clear();
}

Person::~Person(){
    cout << endl << "Destroying Person object";
    subjects.clear();
    extracurricularSubjects.clear();
}

std::string Person::getName() {
    return name;
}
int Person::getAge() {
    return age;
}
std::string Person::getSchool() {
    return school;
}
std::vector<ISubject*> Person::getSubjects() {
    return subjects;
}
std::vector<ExtracurricularSubject> Person::getExtracurricularSubjects() {
    return extracurricularSubjects;
}
void Person::printInfo() {
    cout << endl << "Person:" << name << " aged: " << age;
}
void Person::setSchool(std::string newSchool) {
    school = newSchool;
}
void Person::setSubjects(std::vector<ISubject*> newSubjects) {
    subjects = newSubjects;
}
void Person::setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) {
    extracurricularSubjects = newExtracurricularSubjects;
}