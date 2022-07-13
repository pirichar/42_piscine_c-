#include "Bureaucrat.hpp"

#include "Form.hpp"

// constructeur classe d'exception
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Asked grade is too high, can't assign to user";
}

// constructeur classe d'exception
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Asked grade is too low, can't assign to user";
}

// constructeur par défaut
Bureaucrat::Bureaucrat() : name("John Doe"), grade(150) {}
// constructeur avec nom
Bureaucrat::Bureaucrat(const std::string& desired_name, unsigned int desired_grade)
    : name(desired_name), grade(desired_grade) {
    if (desired_grade < 1)
        throw GradeTooHighException();
    if (desired_grade > 150)
        throw GradeTooLowException();
}
// constructeur de recopie
Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name), grade(obj.grade) {
    if (this->grade < 1)
        throw GradeTooHighException();
    if (this->grade > 150)
        throw GradeTooLowException();
    *this = obj;
}

// overload operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
    this->grade = obj.grade;
    if (this->grade < 1)
        throw GradeTooHighException();
    if (this->grade > 150)
        throw GradeTooLowException();
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

unsigned int Bureaucrat::getGrade() const {
    return this->grade;
}

std::ostream& operator<<(std::ostream& s, const Bureaucrat& value) {
    s << value.getName() << " Bureaucrat grade = " << value.getGrade();
    return s;
}

void Bureaucrat::signForm(Form& form) const {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    } catch (std::exception& ex) {
        std::cout << this->getName() << " could no sign " << form.getName() << " because "
                  << ex.what() << std::endl;
    }
}