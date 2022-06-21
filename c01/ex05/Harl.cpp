#include "Harl.hpp"

Harl::Harl(void){
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	actions[0] = &Harl::_debug;
	actions[1] = &Harl::_info;
	actions[2] = &Harl::_warning;
	actions[3] = &Harl::_error;
}

Harl::~Harl(void){

}

void	Harl::complain(std::string level){
	for(int i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*actions[i])();
			return;
		}
	}
}

void	Harl::_debug(void){
	std::cout << "[---DEBUG---]" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}
void	Harl::_info(void){
	std::cout << "[---INFO---]"  << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::_warning(void){
	std::cout << "[---WARNING---]" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::_error(void){
	std::cout << "[---ERROR---]" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}