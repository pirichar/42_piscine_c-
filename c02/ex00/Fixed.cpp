#include "Fixed.hpp"

const int Fixed::bits = 8;

//Constructeur standard ou je défini que value est 0
Fixed::Fixed() : value(0){
	std::cout << ("Default constructor callded") << std::endl;
}

//constructeur de recopie
//create a new object
Fixed::Fixed(const Fixed& old_obj){
	std::cout << ("Copy constructor called") << std::endl;
	*this = old_obj;
}

//opérateur d'affectation(copy assignment operator)
//Assigns a value to an existing object
//it is always called on an object that has already been constructed
Fixed& Fixed::operator=(const Fixed& obj){

	std::cout << "Copy assignment operator called" << std::endl;
	this->value = obj.getRawBits();

	return *this;
}

//Destructeur standard
Fixed::~Fixed(void){
	std::cout << ("Destructor called") << std::endl;
}


//GetBits
int Fixed::getRawBits(void) const{
	std::cout << ("getRawBits member function called") << std::endl;
	return (this->value);
}
//SetBits
void	Fixed::setRawBits (int const raw){

	this->value = raw;
}
