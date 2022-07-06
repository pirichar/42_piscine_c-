#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat&);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat&);

    void        setName(const std::string&);
    std::string getName() const;
    // void	setGrade(const int&);
    void grade_p();
    void grade_m();
    int  getGrade() const;

private:
    std::string name;
    int         grade;
};

#endif