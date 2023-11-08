#ifndef PAOO_TEMA_II_SUBJECT_H
#define PAOO_TEMA_II_SUBJECT_H

#include "ISubject.h"

using namespace std;

class Subject : public ISubject{
private:
    std::string name;
    std::vector<std::string> requirements;
public:
    Subject(std::string  name,const std::vector<std::string>& requirements);
    ~Subject();
    void printInfo() const override;
    std::string getName() const override;
    std::vector<std::string> getRequirements() const override;
};


#endif //PAOO_TEMA_II_SUBJECT_H
