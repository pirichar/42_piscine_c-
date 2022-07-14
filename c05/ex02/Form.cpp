#include "Form.hpp"

// constructeur par défaut
Form::Form()
    : name("Default form"),
      target("Default target"),
      is_signed(false),
      required_sign(150),
      required_execute(150) {}

// constructeur avec noms et options
Form::Form(const std::string& desired_name, unsigned int to_sign, unsigned int to_execute,
    const std::string& target)
    : name(desired_name),
      target(target),
      is_signed(false),
      required_sign(to_sign),
      required_execute(to_execute) {
    checkGrades();
}

// constructeur de recopie
Form::Form(const Form& obj)
    : name(obj.name),
      is_signed(obj.is_signed),
      required_sign(obj.required_sign),
      required_execute(obj.required_execute) {
    checkGrades();
}

// opérateur de recopie
Form& Form::operator=(const Form& obj) {
    this->is_signed = obj.is_signed;
    checkGrades();
    return *this;
}

// destructeur par défaut
Form::~Form() {}

// classe d'exception too high
const char* Form::GradeTooHighException::what() const throw() {
    return ("User can't acces file, the grade is too high");
}

// classe d'exception too low
const char* Form::GradeTooLowException::what() const throw() {
    return ("User can't access file, the grade is too low");
}
// classe d'exception too low
const char* Form::FormNotSigned::what() const throw() {
    return ("The form isn't signed yet");
}

// getters and setters
const std::string& Form::getName() const {
    return this->name;
}
unsigned int Form::getRequiredToSign() const {
    return this->required_sign;
}
unsigned int Form::getRqeuiredToExecute() const {
    return this->required_execute;
}
bool Form::getIsSigned() const {
    return this->is_signed;
}
const std::string& Form::getTarget() const {
    return this->target;
}

/*Ajoutez également au Form une fonction membre beSigned() prenant un Bureaucrat en paramètre.
Il doit changer le status du formulaire en signé si l’échelon du Bureaucrat est suffisant
(supérieur ou égal à l’échelon requis).
Pour rappel, l’échelon 1 est plus élevé que l’échelon 2.
Si l’échelon est insuffisant, jetez une Form::GradeTooLowException.*/
// since throw is gonna make the function go backward
// we don't need an else after the if
void Form::beSigned(const Bureaucrat& valorous_Bureaucrat) {
    if (valorous_Bureaucrat.getGrade() > this->required_sign)
        throw Form::GradeTooLowException();
    this->is_signed = true;
}

// Grade checking function instead of repeating code
void Form::checkGrades() const {
    if (this->required_execute < 1) {
        throw GradeTooHighException();
    } else if (this->required_execute > 150) {
        throw GradeTooLowException();
    }
    if (this->required_sign < 1) {
        throw GradeTooHighException();
    } else if (this->required_sign > 150) {
        throw GradeTooLowException();
    }
}

//function called by every subForms in the execute function
void Form::validateExecutorAccess(const Bureaucrat& executor) const {
    if (this->is_signed == false)
        throw Form::FormNotSigned();
    if (executor.getGrade() > this->required_execute)
        throw Form::GradeTooLowException();
}
//<< operator overload to print out directly with cout
std::ostream& operator<<(std::ostream& s, const Form& value) {
    s << value.getName() << " form require " << value.getRequiredToSign()
      << " to be signed and require " << value.getRqeuiredToExecute() << " to be executed and it "
      << (value.getIsSigned() ? "is signed" : "is not signed");
    return s;
}