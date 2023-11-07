#include "Teacher.h"

Teacher::Teacher(std::string name, int age):name(name),age(age) {};

Teacher::Teacher(Teacher&& other) noexcept
        : Person(std::move(other)), // Call the base class's move constructor
          subjectsStudents(std::move(other.subjectsStudents)),
          extracurricularSubjectsStudents(std::move(other.extracurricularSubjectsStudents)) {
    other.subjectsStudents.clear();
    other.extracurricularSubjectsStudents.clear();
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
std::vector<Subject> Teacher::getSubjects() {
    return subjects;
}
std::vector<ExtracurricularSubject> Teacher::getExtracurricularSubjects() {
    return extracurricularSubjects;
}
void Teacher::printInfo() {
    cout << name << " attends school: " << school;
}
void Teacher::setSchool(std::string newSchool) {
    school = newSchool;
}
void Teacher::setSubjects(std::vector<Subject> newSubjects) {
    subjects = newSubjects;
}
void Teacher::setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) {
    extracurricularSubjects = newExtracurricularSubjects;
}
vector <tuple <Subject, vector<Student>>> Teacher::getSubjectsStudents(){
    return subjectsStudents;
}
vector <tuple <ExtracurricularSubject, vector<Student>>> Teacher::getExtracurricularSubjectsStudents(){
    return extracurricularSubjectsStudents;
}
void Teacher::setSubjectsStudents(vector <tuple <Subject, vector<Student>>> newSubjectsStudents){

}
void Teacher::setExtracurricularSubjectsStudents(vector <tuple <ExtracurricularSubject, vector<Student>>> newExtracurricularSubjectsStudents){

}
void Teacher::addStudentForSubject(Subject subject, Student newStudent){

}
void Teacher::addStudentForExtracurricularSubject(ExtracurricularSubject extracurricularSubject, Student newStudent){

}

Person::Person() {}
