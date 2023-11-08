//
// Created by Radu Scortescu on 05.11.2023.
//

#ifndef PAOO_TEMA_II_EXTRACURRICULARSUBJECT_H
#define PAOO_TEMA_II_EXTRACURRICULARSUBJECT_H

#include "Subject.h"

class ExtracurricularSubject{
private:
    std::string name;
public:
    ExtracurricularSubject(std::string name);
    ~ExtracurricularSubject();
    void printInfo();
    std::string getName();
};


#endif //PAOO_TEMA_II_EXTRACURRICULARSUBJECT_H
