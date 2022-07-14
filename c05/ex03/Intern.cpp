#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& obj){
	*this = obj;
}

Intern& Intern::operator=(const Intern &){
	return *this;
}

Intern::~Intern(){}

Form *Intern::makeForm(const std::string &name, const std::string &target) const{
	if (name == "Presidential Pardon"){
		return (new PresidentialPardonForm(target));
	}
	else if(name == "robotomy request"){
		return (new RobotomyRequestForm(target));
	}
	else if(name == "Shrubbery Creation"){
		return (new ShrubberyCreationForm(target));
	}
	else{
		std::cout << name << " is not available" << std::endl;
		return (NULL);
	}
}