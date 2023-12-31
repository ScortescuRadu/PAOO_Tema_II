#include "Biology.h"

#include <utility>
namespace biology {
    Biology::Biology(std::string name, const std::vector<std::string> &requirements)
            : name(std::move(name)), requirements(requirements) {};

    Biology::~Biology() {
        cout << endl << "Biology object destroyed";
        requirements.clear();
    }

    std::string Biology::getName() const {
        return name;
    }

    std::vector<std::string> Biology::getRequirements() const {
        return requirements;
    }

    void Biology::printInfo() const {
        std::cout << "Subject: " << name << std::endl;
        std::cout << " has the following requirements:" << std::endl;
        for (const auto &it: requirements)
            std::cout << it << std::endl;
        cout << std::endl;
    }
}