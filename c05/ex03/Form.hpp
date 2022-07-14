#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
public:
    // exception stuff
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class FormNotSigned : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    // coplien stuff
    Form();
    Form(const std::string& name, unsigned int to_sign, unsigned int to_execute,
        const std::string& target);
    Form(const Form&);
    Form& operator=(const Form&);
    virtual ~Form();
    // getters and setters
    const std::string& getName() const;
    unsigned int       getRequiredToSign() const;
    unsigned int       getRqeuiredToExecute() const;
    bool               getIsSigned() const;
    void               beSigned(const Bureaucrat&);
    const std::string& getTarget() const;

    // new execute function
    virtual void execute(Bureaucrat const& executor) const = 0;

protected:
    void validateExecutorAccess(const Bureaucrat& executor) const;

private:
    const std::string  name;
    const std::string  target;
    bool               is_signed;
    const unsigned int required_sign;
    const unsigned int required_execute;
    void               checkGrades() const;
};

// overload of <<
std::ostream& operator<<(std::ostream& s, const Form& value);

#endif