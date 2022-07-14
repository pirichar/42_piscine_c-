#include <exception>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	std::cout << "---------------------creating Bureaucrats---------------------" << std::endl;
	Bureaucrat bur("Toby", 150);
	Bureaucrat bur1("Claris", 138);
	Bureaucrat bur2("Thompson", 137);
	Bureaucrat bur3("The Powerfull one", 1);
	std::cout << "---------------------creating Forms---------------------" << std::endl;
	ShrubberyCreationForm form("Parc");
	RobotomyRequestForm form2("Backyard");
	PresidentialPardonForm form3("Paul");
	std::cout << "---------------------" << bur2 << " is trying to execute" << form <<"---------------------" << std::endl;
	bur2.executeForm(form);
	std::cout << "---------------------" << bur3 << " is trying to sign " << form3 <<"---------------------" << std::endl;
	bur3.signForm(form3);
	std::cout << "---------------------" << bur3 << " is trying to execute " << form3 <<"---------------------" << std::endl;
	bur3.executeForm(form3);

}