#include <exception>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
    std::cout << "---------------------creating Bureaucrats---------------------" << std::endl;
    Bureaucrat bur("Toby", 150);
    Bureaucrat bur1("Claris", 138);
    Bureaucrat bur2("Thompson", 137);
    Bureaucrat bur3("The Powerfull one", 1);

    std::cout << "\n---------------------creating Forms---------------------" << std::endl;
    ShrubberyCreationForm  form("Parc");
    RobotomyRequestForm    form2("backyard");
    PresidentialPardonForm form3("Paul");

    std::cout << "\n---------------------Trying Parc---------------------" << std::endl;
    std::cout << bur2 << " is trying to execute " << form << std::endl;
    bur2.executeForm(form);
    std::cout << bur2 << " is trying to sign " << form << std::endl;
    bur2.signForm(form);
    std::cout << bur2 << " is trying to execute " << form << std::endl;
    bur2.executeForm(form);

    std::cout << "\n---------------------Trying PresidentialPardonForm---------------------"
              << std::endl;
    std::cout << bur3 << " is trying to sign " << form3 << std::endl;
    bur3.signForm(form3);
    std::cout << bur3 << " is trying to execute " << form3 << "---------------------" << std::endl;
    bur3.executeForm(form3);

    std::cout << "\n---------------------Trying to sign RobotoryForm---------------------"
              << std::endl;
    std::cout << bur3 << " is trying to sign " << form2 << std::endl;
    bur3.signForm(form2);
    std::cout << "\n---------------------Trying to execute #1 RobotoryForm---------------------"
              << std::endl;
    std::cout << bur3 << " is trying to execute " << form2 << "---------------------" << std::endl;
    bur3.executeForm(form2);
    std::cout << "\n---------------------Trying to execute #2 RobotoryForm---------------------"
              << std::endl;
    std::cout << bur3 << " is trying to execute " << form2 << "---------------------" << std::endl;
    bur3.executeForm(form2);
    std::cout << "\n---------------------Trying to execute #3 RobotoryForm---------------------"
              << std::endl;
    std::cout << bur3 << " is trying to execute " << form2 << "---------------------" << std::endl;
    bur3.executeForm(form2);
    std::cout << "\n---------------------Trying to execute #4 RobotoryForm---------------------"
              << std::endl;
    std::cout << bur3 << " is trying to execute " << form2 << "---------------------" << std::endl;
    bur3.executeForm(form2);

    std::cout << "\n---------------------Trying bad inputs---------------------" << std::endl;
    std::cout << "---------------------Trying too low inputs---------------------" << std::endl;
    std::cout << "---------------------Trying -1 ---------------------" << std::endl;
    try {
        Bureaucrat test("Bad one", -1);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "---------------------Trying 0 ---------------------" << std::endl;
    try {
        Bureaucrat test("Bad one", 0);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "\n---------------------Trying too high inputs---------------------" << std::endl;
    std::cout << "---------------------Trying 151 ---------------------" << std::endl;
    try {
        Bureaucrat test("Bad one", 151);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "---------------------Trying 20000000 ---------------------" << std::endl;
    try {
        Bureaucrat test("Bad one", 20000000);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "---------------------Trying the Intern ---------------------" << std::endl;
    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    bur3.signForm(*rrf);
    bur3.executeForm(*rrf);
}