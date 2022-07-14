#include "ShrubberyCreationForm.hpp"

#include <fstream>

// default constructor
ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("Default Shrubbery Form", 145, 137, "Default Shruberry Target") {}
// copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
    : Form(obj.getName(), obj.getRequiredToSign(), obj.getRqeuiredToExecute(), obj.getTarget()) {}
// target constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("Default Shruberry Form", 145, 137, target) {}
// copy operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&) {
    return *this;
}

// Default destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    validateExecutorAccess(executor);

    std::ofstream to_open((this->getTarget() + "_shrubbery").c_str());
    if (to_open.is_open()) {
        for (int i = 0; i < 2; ++i) {
            to_open << "                                                         .\n"
                    << "                                              .         ;\n"
                    << "                 .              .              ;%     ;;\n"
                    << "                   ,           ,                :;%  %;\n"
                    << "                    :         ;                   :;%;'     .,\n"
                    << "           ,.        %;     %;            ;        %;'    ,;\n"
                    << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
                    << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
                    << "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
                    << "                `%;.     ;%;     %;'         `;%%;.%;'\n"
                    << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
                    << "                    `:%;.  :;bd%;          %;@%;'\n"
                    << "                      `@%:.  :;%.         ;@@%;'\n"
                    << "                        `@%.  `;@%.      ;@@%;\n"
                    << "                          `@%%. `@%%    ;@@%;\n"
                    << "                            ;@%. :@%%  %@@%;\n"
                    << "                              %@bd%%%bd%%:;\n"
                    << "                                #@%%%%%:;;\n"
                    << "                                %@@%%%::;\n"
                    << "                                %@@@%(o);  . '\n"
                    << "                                %@@@o%;:(.,'\n"
                    << "                            `.. %@@@o%::;\n"
                    << "                               `)@@@o%::;\n"
                    << "                                %@@(o)::;\n"
                    << "                               .%@@@@%::;\n"
                    << "                               ;%@@@@%::;.\n"
                    << "                              ;%@@@@%%:;;;.\n"
                    << "                          ...;%@@@@@%%:;;;;,..";

            if (i < 2)
                to_open << "\n\n";
            else
                to_open << "\n";
        }
        to_open.close();
    }
}