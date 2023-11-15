#include "Student.h"

using namespace std;

namespace student {
    Student::Student(std::string name, int age) : name(name), age(age) { cout << endl << "Student created"; };

    Student::Student(Student &&other) noexcept
            : name(other.name),
            age(other.age),
            school(std::move(other.school)),
            subjects(std::move(other.subjects)),
            extracurricularSubjects(std::move(other.extracurricularSubjects)),
            scholarSituation(std::move(other.scholarSituation)) {
        cout << "Moving Student";
        other.name = "";
        other.age = 0;
        other.school = "";
        other.subjects.clear();
        other.extracurricularSubjects.clear();
        other.scholarSituation.clear();
    }

    Student::Student(const Student &other)
            : Person(other), // Call the base class's copy constructor
              name(other.name),
              age(other.age),
              school(other.school),
              subjects(other.subjects),
              extracurricularSubjects(other.extracurricularSubjects),
              scholarSituation(other.scholarSituation) {};

    Student& Student::operator=(const Student& other) {
        if (this != &other) {  // Avoid self-assignment
            // Copy the data members from 'other' to 'this'
            name = other.name;
            age = other.age;
            school = other.school;
            subjects = other.subjects;
            extracurricularSubjects = other.extracurricularSubjects;
            scholarSituation = other.scholarSituation;
        }
        return *this;
    }

    ostream& operator<<(ostream& os, const Student& student) {
        os << "Name: " << student.name << ", Age: " << student.age << ", School: " << student.school << endl;
        return os;
    }

    Student::~Student() {
        cout << endl << "Destroying Student object";
        extracurricularSubjects.clear();
        subjects.clear();
    }

    std::string Student::getName() {
        return name;
    }

    int Student::getAge() {
        return age;
    }

    std::string Student::getSchool() {
        return school;
    }

    std::vector<ISubject *> Student::getSubjects() {
        return subjects;
    }

    std::vector<ExtracurricularSubject> Student::getExtracurricularSubjects() {
        return extracurricularSubjects;
    }

    void Student::printInfo() {
        cout << endl << "Student: " << name << " aged " << age;
        if (school != std::string()) {
            cout << " attends the school: " << school;
        }
        cout << ", has the subjects:" << endl;
        for (auto it: subjects)
            it->printInfo();
        for (auto it: extracurricularSubjects)
            it.printInfo();
    }

    void Student::setSchool(std::string newSchool) {
        school = newSchool;
    }

    void Student::setSubjects(std::vector<ISubject *> newSubjects) {
        subjects = newSubjects;
    }

    void Student::setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) {
        extracurricularSubjects = newExtracurricularSubjects;
    }

    void Student::setScholarSituation(vector<tuple<ISubject *, vector<int>>> newScholarSituation) {
        scholarSituation = newScholarSituation;
    }

    void Student::addGradeForSubject(ISubject *subject, int grade) {
        for (auto &entry: scholarSituation) {
            if (std::get<0>(entry)->getName() == subject->getName()) {
                std::get<1>(entry).push_back(grade);
                return; // Subject found and grade added
            }
        }

        std::vector<int> grades;
        grades.push_back(grade);
        scholarSituation.emplace_back(subject, grades);
    }

    vector<tuple<ISubject *, vector<int>>> Student::getScholarSituation() {
        return scholarSituation;
    }

    Student::Student() {

    }
}