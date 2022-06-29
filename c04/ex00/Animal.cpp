#include "Animal.hpp"

//constructeur par défaut
Animal::Animal(): type("I am nothing yet"){
	std::cout << ("Animal default constructor callded") << std::endl;
}

Animal::Animal(const std::string& given_type): type(given_type){
	std::cout << ("Animal name constructor callded") << std::endl;
}

//constructeur de copie
Animal::Animal(const Animal& old_obj){
	std::cout << ("Animal Copy constructor called") << std::endl;
	*this = old_obj;
}

//desctructeur par défaut
Animal::~Animal(){
	std::cout << ("Animal Destructor called") << std::endl;
}

//opérateur de recopie
Animal& Animal::operator=(const Animal& obj){
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = obj.type;
	return *this;
}


//make sound
void	Animal::makeSound() const{
	std::cout << "&?%?&?*#$?*@# STRANGE GROWLING SOUND...." << std::endl;
}

//geType
std::string Animal::getType() const{
	return this->type;
}


//Overload << operator
std::ostream& operator<<(std::ostream& s, const Animal& value){

	s << value.getType();
	return s;
}
