#include "ClapTrap.hpp"


ClapTrap::ClapTrap(const std::string& desired_name) : name(desired_name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "Constructor called, named assigned" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old_obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj){
	std::cout << "Copy assignment operator called" << std::endl;

	//est-ce que j'aurais besoin d'un getter pour faire ça ?
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;

	return *this;
}