#include "Chemistry.h"

#include <utility>

Chemistry::Chemistry(std::string  name,const std::vector<std::string>& requirements)
        : name(std::move(name)), requirements(requirements){};

std::string Chemistry::getName() const {
    return name;
}

std::vector<std::string> Chemistry::getRequirements() const {
    return requirements;
}

void Chemistry::printInfo() const {
    std::cout << "Subject: " << name << std::endl;
    std::cout << " has the following requirements:" << std::endl;
    for (const auto& it : requirements)
        std::cout << it << std::endl;
    cout << std::endl;
}