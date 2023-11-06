#include "Student.h"

Student::Student(std::string name, int age):name(name),age(age) {};

std::string Student::getName() {
    return name;
}
int Student::getAge() {
    return age;
}
std::string Student::getSchool() {
    return school;
}
std::vector<Subject> Student::getSubjects() {
    return subjects;
}
std::vector<ExtracurricularSubject> Student::getExtracurricularSubjects() {
    return extracurricularSubjects;
}
void Student::printInfo() {
    cout << name << " attends school: " << school;
}
void Student::setSchool(std::string newSchool) {
    school = newSchool;
}
void Student::setSubjects(std::vector<Subject> newSubjects) {
    subjects = newSubjects;
}
void Student::setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) {
    extracurricularSubjects = newExtracurricularSubjects;
}

void Student::setScholarSituation(vector <tuple <Subject, vector<int>>> newScholarSituation){
    scholarSituation = newScholarSituation;
}
void Student::addGradeForSubject(Subject subject, int grade){
    for (auto& entry : scholarSituation) {
        if (std::get<0>(entry).getName() == subject.getName()) {
            std::get<1>(entry).push_back(grade);
            return; // Subject found and grade added
        }
    }

    std::vector<int> grades;
    grades.push_back(grade);
    scholarSituation.emplace_back(subject, grades);
}

vector <tuple <Subject, vector<int>>> Student::getScholarSituation(){
    return scholarSituation;
}