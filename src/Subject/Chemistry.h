//
// Created by Radu Scortescu on 05.11.2023.
//

#ifndef PAOO_TEMA_II_CHEMISTRY_H
#define PAOO_TEMA_II_CHEMISTRY_H

#include "ISubject.h"

using namespace std;

class Chemistry : public ISubject{
private:
    std::string name;
    std::vector<std::string> requirements;
public:
    Chemistry(std::string  name,const std::vector<std::string>& requirements);
    ~Chemistry();
    void printInfo() const override;
    std::string getName() const override;
    std::vector<std::string> getRequirements() const override;
};


#endif //PAOO_TEMA_II_CHEMISTRY_H
