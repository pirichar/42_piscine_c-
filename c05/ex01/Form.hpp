#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form{
	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		Form();
		Form(const Form&);
		Form& operator=(const Form&);
		~Form();

	private:
		const std::string& name;
		bool is_signed;
		unsigned int	requiredToSign;
		unsigned int	requiredToExecute;

};
	std::ostream& operator<<(std::ostream& s, const Bureaucrat& value);
#endif