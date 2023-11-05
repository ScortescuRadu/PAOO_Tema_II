#include <iostream>

#include "Subject/ISubject.h"
#include "Subject/Biology.h"
#include "Subject/Chemistry.h"

using namespace std;

int main() {
    Biology introBiology = *new Biology("Introductory Biology", {"sdf"});
    Chemistry introChemistry = *new Chemistry("Introductory Chemistry", {"asd"});

    ISubject* subjects[] = {&introBiology, &introChemistry};

    for (auto s : subjects){
        cout << s -> getName() << std::endl;
    }
    return 0;
}
