#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string&);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		virtual ~RobotomyRequestForm();

		virtual void execute(const Bureaucrat& executor) const;
};

#endif 