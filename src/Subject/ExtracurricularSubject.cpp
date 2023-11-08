//
// Created by Radu Scortescu on 05.11.2023.
//

#include <utility>

#include "ExtracurricularSubject.h"

using namespace std;

ExtracurricularSubject::ExtracurricularSubject(std::string name):name(std::move(name)){};

ExtracurricularSubject::~ExtracurricularSubject(){
    cout << endl << "Extracurricular object destroyed" << endl;
}

std::string ExtracurricularSubject::getName() {return name;};

void ExtracurricularSubject::printInfo() {
    cout << "Extra: " << name;
}