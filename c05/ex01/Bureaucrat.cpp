#include "Bureaucrat.hpp"

//constructeur classe d'exception
const char *Bureaucrat::GradeTooHighException::what() const  throw(){
    return "Asked grade is too high";
}

//constructeur classe d'exception
const char *Bureaucrat::GradeTooLowException::what() const  throw(){
    return "Asked grade is too low";
}

// constructeur par défaut
Bureaucrat::Bureaucrat() : name("John Doe"), grade(150) {}
//constructeur avec nom
Bureaucrat::Bureaucrat(const std::string& desired_name, unsigned int desired_grade): name(desired_name), grade(desired_grade){
    if (desired_grade < 1)
        throw GradeTooLowException();
    if (desired_grade > 150)
        throw GradeTooHighException();
}
// constructeur de recopie
Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
    *this = obj;
}

// overload operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat&) {
    return *this;
}

// destructeur
Bureaucrat::~Bureaucrat() {}

void Bureaucrat::setName(const std::string& desired_name) {
    this->name = desired_name;
}

std::string Bureaucrat::getName() const {
    return (this->name);
}

void Bureaucrat::grade_p(int points) {
    if (this->grade - points < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade -= points;
}

void Bureaucrat::grade_m(int points) {
    if (this->grade + points > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade += points;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

std::ostream& operator<<(std::ostream& s, const Bureaucrat& value){
    s << value.getName() << " Bureaucrat grade = " << value.getGrade();
    return s;
}
