#include "Bureaucrat.hpp"

// constructeur par défaut
Bureaucrat::Bureaucrat() : name("John Doe"), grade(150) {}

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

void Bureaucrat::grade_p() {
    if (this->grade < 150)
        this->grade++;
}

void Bureaucrat::grade_m() {
    if (this->grade > 0)
        this->grade--;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}