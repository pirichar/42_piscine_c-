#include "RobotomyRequestForm.hpp"

#include <fstream>

// default constructor
RobotomyRequestForm::RobotomyRequestForm()
    : Form("Default Robotomy Form", 72, 45, "Default Robotomy Target") {}
// copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
    : Form(obj.getName(), obj.getRequiredToSign(), obj.getRqeuiredToExecute(), obj.getTarget()) {}
// target constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("Default Robotomy Form", 72, 45, target) {}
// copy operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&) {
    return *this;
}

// Default destructor
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    validateExecutorAccess(executor);
    std::cout << "* Drilling noises *\n";

    if (rand() % 2 == 0) {
        std::cout << getTarget() << " has been robotomized successfully\n";
    } else {
        std::cout << getTarget() << "'s robotomy has failed\n";
    }
}