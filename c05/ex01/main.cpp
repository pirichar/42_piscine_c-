#include <exception>
#include "Bureaucrat.hpp"

int main() {

    std::cout << "--------Creating and presenting everyone--------" << std::endl;
    Bureaucrat steve;
    Bureaucrat steven("Steven", 10);
    std::cout << steve << std::endl;
    std::cout << steve.getName() << " started with grade = " << steve.getGrade() << std::endl;
    std::cout << steven.getName() << " started with grade = " << steven.getGrade() << std::endl;

    std::cout << "--------Now I try to add 100 to the grade of everyone--------" << std::endl;
    try{
    steve.grade_p(100);
    std::cout << steve.getName() << " is now at grade = " << steve.getGrade() << std::endl;
    steven.grade_p(100);
    std::cout << steven.getName() << " is now at grade = " << steven.getGrade() << std::endl;
    } catch (Bureaucrat::GradeTooHighException& ex){
        std::cout << ex.what() << std::endl;
    }

    std::cout << "--------Now I try to remove 100 to the grade of everyone--------" << std::endl;
	try{
    steve.grade_m(100);
    std::cout << steve.getName() << " is now at grade = " << steve.getGrade() << std::endl;
    steven.grade_m(100);
    std::cout << steven.getName() << " is now at grade = " << steven.getGrade() << std::endl;
    } catch (std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    std::cout << "--------Everyone is bad at his job I TRY TO DO IT AGAIN--------" << std::endl;
    try{
    steve.grade_m(100);
    std::cout << steve.getName() << " is now at grade = " << steve.getGrade() << std::endl;
    steven.grade_m(100);
    std::cout << steven.getName() << " is now at grade = " << steven.getGrade() << std::endl;
    std::cout << "But nothing have changed..... god damn Unions" << std::endl;
    } catch (Bureaucrat::GradeTooLowException& ex){
        std::cout << ex.what() << std::endl;
    }

    std::cout << "--------now trying to create a bureaucrat with too high grades--------" << std::endl;
    try {
        Bureaucrat Silvianne("Silvianne", 200);
    } catch (std::exception& ex) { //catch toute les exceptions qui héritent de std::exceptions
        std::cout << ex.what() << std::endl;
	} catch (...) { //catch all 		
        std::cout << "unkowned exception" << std::endl;
	}
    std::cout << "--------now trying to create a bureaucrat with too low grades--------" << std::endl;
    try {
        Bureaucrat Silvianne("Silvianne", 0);
    } catch (std::exception& ex) { //catch toute les exceptions qui héritent de std::exceptions
        std::cout << ex.what() << std::endl;
	} catch (...) { //catch all 		
        std::cout << "unkowned exception" << std::endl;
	}

    return 0;
}