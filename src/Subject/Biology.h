//
// Created by Radu Scortescu on 05.11.2023.
//

#ifndef PAOO_TEMA_II_BIOLOGY_H
#define PAOO_TEMA_II_BIOLOGY_H

#include "ISubject.h"

class Biology  : public ISubject{
private:
    std::string name;
    std::vector<std::string> requirements;
public:
    Biology(std::string  name,const std::vector<std::string>& requirements);
    ~Biology();
    void printInfo() const override;
    std::string getName() const override;
    std::vector<std::string> getRequirements() const override;
};


#endif //PAOO_TEMA_II_BIOLOGY_H
