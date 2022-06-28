#include "ClapTrap.hpp"


ClapTrap::ClapTrap(const std::string& desired_name) : name(desired_name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "Constructor called, " << name << " assigned" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old_obj){
	std::cout << "Copy constructor called actually cloning " << old_obj.name << std::endl;
	*this = old_obj;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for " << this->name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj){
	std::cout << "Copy assignment operator called" << std::endl;

	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;

	return *this;
}

void	ClapTrap::attack(const std::string& target){
	bool attack = true;
	if (this->energyPoints <= 0){
		attack = false;
		std::cout << "No more energy points for " << this->name << std::endl;
	}
	if (this->hitPoints <= 0){
		attack = false;
		std::cout << "No more hit points for " << this->name << std::endl;
	}
	else if (attack == true){
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage !" << std::endl;
		this->energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
		if (this->hitPoints > 0){
			this->hitPoints -= amount;
			std::cout << "ClapTrap " << this->name << " received " << amount << " hit points !" << std::endl;
		}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->hitPoints >= 0 && this->energyPoints > 0){
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " repaired " << amount << " of hit points !" << std::endl;
	}
}
