#include "HumanB.hpp"

HumanB::HumanB (const std::string& name):_name(name), _weapon(NULL){
}

HumanB::~HumanB (void){
	
	return;
}

void	HumanB::attack(void) const{
	std::cout << this->_name << " attacks with their " << (this->_weapon ? this->_weapon->getType() : "fists") << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){

	this->_weapon = &weapon;
}