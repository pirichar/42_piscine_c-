#include <exception>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "--------Creating and presenting everyone--------" << std::endl;
    Bureaucrat steve;
    Bureaucrat steven("Steven", 10);
    std::cout << steve << std::endl;
    std::cout << steven << std::endl;

    std::cout << "--------Now I try to add 100 to the grade of everyone--------" << std::endl;
    try {
        steve.grade_p(100);
        std::cout << steve << std::endl;
        steven.grade_p(100);
        std::cout << steven << std::endl;
    } catch (Bureaucrat::GradeTooHighException& ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "--------Now I try to remove 100 to the grade of everyone--------" << std::endl;
    try {
        steve.grade_m(100);
        std::cout << steve << std::endl;
        steven.grade_m(100);
        std::cout << steven << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "--------Everyone is bad at his job I TRY TO DO IT AGAIN--------" << std::endl;
    try {
        steve.grade_m(100);
        std::cout << steve << std::endl;
        steven.grade_m(100);
        std::cout << steven << std::endl;
    } catch (Bureaucrat::GradeTooLowException& ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "--------now trying to create a bureaucrat with too high grades--------"
              << std::endl;
    try {
        Bureaucrat Silvianne("Silvianne", 200);
    } catch (std::exception& ex) {  // catch toute les exceptions qui héritent de std::exceptions
        std::cout << ex.what() << std::endl;
    } catch (...) {  // catch all
        std::cout << "unkowned exception" << std::endl;
    }
    std::cout << "--------now trying to create a bureaucrat with too low grades--------"
              << std::endl;
    try {
        Bureaucrat Silvianne("Silvianne", 0);
    } catch (std::exception& ex) {  // catch toute les exceptions qui héritent de std::exceptions
        std::cout << ex.what() << std::endl;
    } catch (...) {  // catch all
        std::cout << "unkowned exception" << std::endl;
    }


    std::cout << "--------THE FORM PART OF THINGS--------"
              << std::endl;
    Form form;
    Bureaucrat bur;
    std::cout <<form<<std::endl;
    form.beSigned(bur);
    std::cout <<form<<std::endl;
    Form form1("popa", 100, 100);
    std::cout <<form1<<std::endl;
    try{
    form1.beSigned(bur);}
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    bur.signForm(form);
    bur.signForm(form1);
    Form form2(form);
    bur.signForm(form2);
    bur.signForm(form1);
    form1 = form;
    bur.signForm(form2);
    bur.signForm(form1);
    return 0;
}