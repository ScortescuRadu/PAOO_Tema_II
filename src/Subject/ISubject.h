#ifndef PAOO_TEMA_II_ISUBJECT_H
#define PAOO_TEMA_II_ISUBJECT_H

#include <iostream>
#include <string>
#include <tuple>

using namespace std;

class ISubject {
public:
    virtual std::string getName() const = 0;
    virtual std::vector<std::string> getRequirements() const = 0;
    virtual void printInfo() const = 0;
};


#endif //PAOO_TEMA_II_ISUBJECT_H
