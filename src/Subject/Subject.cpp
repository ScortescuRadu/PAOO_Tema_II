#include "Subject.h"

#include <utility>

Subject::Subject(std::string  name,const std::vector<std::string>& requirements)
    : name(std::move(name)), requirements(requirements){};

std::string Subject::getName() const {
    return name;
}

std::vector<std::string> Subject::getRequirements() const {
    return requirements;
}

void Subject::printInfo() const {
    std::cout << "Subject: " << name << std::endl;
    std::cout << " has the following requirements:" << std::endl;
    for (const auto& it : requirements)
        std::cout << it << std::endl;
    cout << std::endl;
}
