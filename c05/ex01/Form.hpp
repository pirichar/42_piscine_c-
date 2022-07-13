#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
public:
    // coplien stuff
    Form();
    Form(const std::string& name, unsigned int to_sign, unsigned int to_execute);
    Form(const Form&);
    Form& operator=(const Form&);
    ~Form();
    // exception stuff
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    // getters and setters
    const std::string& getName() const;
    unsigned int       getRequiredToSign() const;
    unsigned int       getRqeuiredToExecute() const;
    bool               getIsSigned() const;
    void               beSigned(const Bureaucrat&);

private:
    const std::string  name;
    bool               is_signed;
    const unsigned int required_sign;
    const unsigned int required_execute;
    void               checkGrades() const;
};

// overload of <<
std::ostream& operator<<(std::ostream& s, const Form& value);

#endif