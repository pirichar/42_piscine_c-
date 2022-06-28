#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("John DOE"), hitPoints(100), energyPoints(50), attackDamage(20){
	std::cout << "\e[0;34mClapTrap John DOE constructor called, next time provide a name\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string& desired_name) : name(desired_name), hitPoints(100), energyPoints(50), attackDamage(20){
	std::cout << "\e[0;34mClapTrap name constructor called, " << name << " assigned\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old_obj){
	std::cout << "\e[0;34mClap Trap Copy constructor called actually cloning " << old_obj.name << " for you\e[0m" << std::endl;
	*this = old_obj;
}

ClapTrap::~ClapTrap(){
	std::cout << "\e[0;34mClap Trap Destructor called for " << this->name << "\e[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj){
	std::cout << "\e[0;34mCopy assignment operator called\e[0m" << std::endl;

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
		std::cout << "\e[0;31mClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage !\e[0m" << std::endl;
		this->energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
		if (this->hitPoints > 0){
			this->hitPoints -= amount;
			std::cout << "\033[48:2:255:165:0mClapTrap " << this->name << " received " << amount << " hit points !\033[m" << std::endl;
		}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->hitPoints >= 0 && this->energyPoints > 0){
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "\e[1;92mClapTrap " << this->name << " repaired " << amount << " of hit points !\e[0m" << std::endl;
	}
}
