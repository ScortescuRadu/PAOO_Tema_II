//
// Created by Radu Scortescu on 05.11.2023.
//

#ifndef PAOO_TEMA_II_TEACHER_H
#define PAOO_TEMA_II_TEACHER_H

#include "Person.h"
#include "Student.h"

using namespace std;

class Teacher : public Person{
private:
    std::string name;
    int age;
    std::string school;
    std::vector<Subject> subjects;
    std::vector<ExtracurricularSubject> extracurricularSubjects;
    vector <tuple <Subject, vector<Student>>> subjectsStudents;
    vector <tuple <ExtracurricularSubject, vector<Student>>> extracurricularSubjectsStudents;

public:
    Teacher(std::string name, int age);

    std::string getName() override;
    int getAge() override;
    std::string getSchool() override;
    std::vector<Subject> getSubjects() override;
    std::vector<ExtracurricularSubject> getExtracurricularSubjects() override;
    vector <tuple <Subject, vector<Student>>> getSubjectsStudents();
    vector <tuple <ExtracurricularSubject, vector<Student>>> getExtracurricularSubjectsStudents();

    void printInfo() override;
    void setSchool(std::string newSchool) override;
    void setSubjects(std::vector<Subject> newSubjects) override;
    void setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) override;
    void setSubjectsStudents(vector <tuple <Subject, vector<Student>>> newSubjectsStudents);
    void setExtracurricularSubjectsStudents(vector <tuple <ExtracurricularSubject, vector<Student>>> newExtracurricularSubjectsStudents);
    void addStudentForSubject(Subject subject, Student newStudent);
    void addStudentForExtracurricularSubject(ExtracurricularSubject extracurricularSubject, Student newStudent);
};


#endif //PAOO_TEMA_II_TEACHER_H
