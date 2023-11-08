#include "Teacher.h"

Teacher::Teacher(std::string name, int age):name(name),age(age) {cout << endl <<"Teacher created";};

Teacher::Teacher(Teacher&& other) noexcept
        : Person(std::move(other)), // Call the base class's move constructor
          subjectsStudents(std::move(other.subjectsStudents)),
          extracurricularSubjectsStudents(std::move(other.extracurricularSubjectsStudents)) {
    other.subjectsStudents.clear();
    other.extracurricularSubjectsStudents.clear();
}

Teacher::Teacher(const Teacher& other)
    : Person(other), // Call the base class's copy constructor
    name(other.name),
    age(other.age),
    school(other.school),
    subjects(other.subjects),
    extracurricularSubjects(other.extracurricularSubjects),
    subjectsStudents(other.subjectsStudents),
    extracurricularSubjectsStudents(other.extracurricularSubjectsStudents) {};

Teacher::~Teacher(){
    cout << endl << "Destroying Teacher object";
    subjectsStudents.clear();
    extracurricularSubjectsStudents.clear();
}

std::string Teacher::getName() {
    return name;
}
int Teacher::getAge() {
    return age;
}
std::string Teacher::getSchool() {
    return school;
}
std::vector<ISubject*> Teacher::getSubjects() {
    return subjects;
}
std::vector<ExtracurricularSubject> Teacher::getExtracurricularSubjects() {
    return extracurricularSubjects;
}
void Teacher::printInfo() {
    cout << endl << "Teacher: " << name << " aged " << age;
    if (school != std::string()) {
        cout << "school: " << school;
    }
    cout << ", is teaching the subjects:";
    for (auto it : subjects)
        it->printInfo();
    for (auto it : extracurricularSubjects)
        it.printInfo();
}
void Teacher::setSchool(std::string newSchool) {
    school = newSchool;
}
void Teacher::setSubjects(std::vector<ISubject*> newSubjects) {
    subjects = newSubjects;
}
void Teacher::setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) {
    extracurricularSubjects = newExtracurricularSubjects;
}
vector <tuple <ISubject*, vector<Student>>> Teacher::getSubjectsStudents(){
    return subjectsStudents;
}
vector <tuple <ExtracurricularSubject, vector<Student>>> Teacher::getExtracurricularSubjectsStudents(){
    return extracurricularSubjectsStudents;
}
void Teacher::setSubjectsStudents(vector <tuple <ISubject*, vector<Student>>> newSubjectsStudents){

}
void Teacher::setExtracurricularSubjectsStudents(vector <tuple <ExtracurricularSubject, vector<Student>>> newExtracurricularSubjectsStudents){

}
void Teacher::addStudentForSubject(ISubject* subject, Student newStudent){

}
void Teacher::addStudentForExtracurricularSubject(ExtracurricularSubject extracurricularSubject, Student newStudent){

}

Person::Person() {}
