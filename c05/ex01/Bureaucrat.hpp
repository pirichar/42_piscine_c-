#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Form;

class Bureaucrat {
public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    Bureaucrat();
    Bureaucrat(const std::string& name, unsigned int grade);
    Bureaucrat(const Bureaucrat&);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat&);

    void         setName(const std::string&);
    std::string  getName() const;
    void         grade_p(int points);
    void         grade_m(int points);
    unsigned int getGrade() const;
    void         signForm(Form& form) const;

private:
    std::string name;
    int         grade;
};

std::ostream& operator<<(std::ostream& s, const Bureaucrat& value);

#endif