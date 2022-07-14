#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
		virtual ~ShrubberyCreationForm();

		virtual void execute(const Bureaucrat& executor) const;
};

#endif 