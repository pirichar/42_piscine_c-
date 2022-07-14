#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm(const std::string&);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		virtual ~PresidentialPardonForm();

		virtual void execute(const Bureaucrat& executor) const;
};

#endif 