#include "Zombie.hpp"



Zombie::Zombie(void){
	
	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::~Zombie(void){

	std::cout << "Destuctor called for = "<< this->_name << std::endl;
	return;
}

void	Zombie::setName(std::string name){

	this->_name = name;
}

std::string	Zombie::getName(void) const{

	return this->_name;
}

void	Zombie::printName(void) const{

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}