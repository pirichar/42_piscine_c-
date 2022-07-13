#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("Default Shrubbery Form", 145, 137, "Default Shruberry Target") {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
    : Form(obj.getName(), obj.getRequiredToSign(), obj.getRqeuiredToExecute(), obj.getTarget()) {}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("Default Shruberry Form", 145, 137, target) {}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj){
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
	//check for execution

	//execute with target + _Shrubbery
}