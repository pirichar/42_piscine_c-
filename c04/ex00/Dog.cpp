#include "Dog.hpp"

//constructeur par défaut
Dog::Dog(): Animal("Dog"){
	std::cout << ("Dog Default constructor callded") << std::endl;
}

//constructeur de copie
Dog::Dog(const Dog& old_obj){
	std::cout << ("Dog Copy constructor called") << std::endl;
	*this = old_obj;
}

//desctructeur par défaut
Dog::~Dog(){
	std::cout << ("Dog Destructor called") << std::endl;
}

//opérateur de recopie
Dog& Dog::operator=(const Dog& obj){
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = obj.type;
	return *this;
}


//make sound
void	Dog::makeSound() const{
	std::cout << "🐕LOUD PEE NOISE; SHIT ITS ON YOUR LEG" << std::endl;
}