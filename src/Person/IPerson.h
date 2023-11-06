#ifndef PAOO_TEMA_II_IPERSON_H
#define PAOO_TEMA_II_IPERSON_H

#include <iostream>
#include <string>

#include "Subject.h"
#include "ExtracurricularSubject.h"

using namespace std;

class IPerson {
public:
    virtual std::string getName() = 0;
    virtual int getAge() = 0;
    virtual std::string getSchool() = 0;
    virtual std::vector<Subject> getSubjects() = 0;
    virtual std::vector<ExtracurricularSubject> getExtracurricularSubjects() = 0;
    virtual void printInfo() = 0;
    virtual void setSchool(std::string newSchool) = 0;
    virtual void setSubjects(std::vector<Subject> newSubjects) = 0;
    virtual void setExtracurricularSubjects(std::vector<ExtracurricularSubject> newExtracurricularSubjects) = 0;

};

#endif //PAOO_TEMA_II_IPERSON_H
