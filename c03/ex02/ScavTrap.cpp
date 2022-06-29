#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "\e[0;35mScavTrap JOHN DOE constructor called please provide a name next time\e[0m" << std::endl;
}
ScavTrap::ScavTrap(const std::string& desired_name) : ClapTrap(desired_name){
	std::cout << "\e[0;35mScavTrap name consstructor called for " << desired_name << "\e[0m" << std::endl;
}
ScavTrap::~ScavTrap(){
	std::cout << "\e[0;35mScavTrap " << this->name << " destructor called\e[0m" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& old_obj){
	std::cout << "\e[0;34mScavTrap Copy constructor called actually cloning " << old_obj.name << " for you\e[0m" << std::endl;
	*this = old_obj;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& obj){
	std::cout << "\e[0;35mScavTrap copy assignment operator called\e[0m" << std::endl;

	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;

	return *this;
}

void	ScavTrap::attack(const std::string& target){
		std::cout << "\e[0;35mScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage !\e[0m" << std::endl;
}

void	ScavTrap::guardGate() const{
		std::cout << "ScavTrap " << this->name << " has now entered in Gate Keeper mode" << std::endl;
}