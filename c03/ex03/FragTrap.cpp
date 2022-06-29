#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "\e[0;31mFragTrap JOHN DOE constructor called please provide a name next time\e[0m" << std::endl;
}
FragTrap::FragTrap(const std::string& desired_name) : ClapTrap(desired_name){
	std::cout << "\e[0;31mFragTrap name consstructor called for " << desired_name << "\e[0m" << std::endl;
}
FragTrap::~FragTrap(){
	std::cout << "\e[0;31mFragTrap " << this->name << " destructor called\e[0m" << std::endl;
}
FragTrap::FragTrap(const FragTrap& old_obj){
	std::cout << "\e[0;31mFragTrap Copy constructor called actually cloning " << old_obj.name << " for you\e[0m" << std::endl;
	*this = old_obj;
}
FragTrap& FragTrap::operator=(const FragTrap& obj){
	std::cout << "\e[0;31mFragTrap copy assignment operator called\e[0m" << std::endl;

	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;

	return *this;
}

void	FragTrap::attack(const std::string& target){
		std::cout << "\e[0;31mFragTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage !\e[0m" << std::endl;
}

void	FragTrap::HighFivesGuys() const{
		std::cout << "FragTrap " << this->name << " want's a high five don't let him hang in there :( !" << std::endl;
}