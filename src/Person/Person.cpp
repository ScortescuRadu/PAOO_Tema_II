#include "Person.h"

Person::Person(std::string name, int age):name(name),age(age) {};

std::string Person::getName() {
    return name;
}
int Person::getAge() {
    return age;
}
std::string Person::getSchool() {
    return school;
}
std::vector<Subject> Person::getSubjects() {
    return subjects;
}
std::vector<ExtracurricularSubject> Person::getExtracurricularSubjects() {
    return extracurricularSubjects;
}
void Person::printInfo() {
    cout << name << " attends school: " << school;
}
void Person::setSchool(std::string newSchool) {
    school = newSchool;
}
void Person::setSubjects(std::vector<Subject> newSubjects) {
    subjects = newSubjects;
}
void Person::setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) {
    extracurricularSubjects = newExtracurricularSubjects;
}