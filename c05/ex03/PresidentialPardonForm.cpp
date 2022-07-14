#include "PresidentialPardonForm.hpp"

#include <fstream>

// default constructor
PresidentialPardonForm::PresidentialPardonForm()
    : Form("Default PresidentialPardon Form", 25, 5, "Default PresidentialPardon Target") {}
// copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
    : Form(obj.getName(), obj.getRequiredToSign(), obj.getRqeuiredToExecute(), obj.getTarget()) {}
// target constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : Form("Default PresidentialPardon Form", 25, 5, target) {}
// copy operator
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&) {
    return *this;
}

// Default destructor
PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    validateExecutorAccess(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}