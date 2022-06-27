#include "Fixed.hpp"

const int Fixed::bits = 8;
//Default constructor
Fixed::Fixed() : value(0){
	std::cout << ("Default constructor callded") << std::endl;
}
//Int constructor
Fixed::Fixed(const int entier) : value(entier << bits){
	std::cout << ("Int constructor callded") << std::endl;
}

Fixed::Fixed(const float flottant) : value((int)roundf(flottant * (float)(1 << bits))){

	std::cout << ("Float constructor callded") << std::endl;
}

Fixed::Fixed(const Fixed& old_obj){
	std::cout << ("Copy constructor called") << std::endl;
	*this = old_obj;
}

Fixed& Fixed::operator=(const Fixed& obj){

	std::cout << "Copy assignment operator called" << std::endl;
	if (&obj != this)
		this->value = obj.getRawBits();

	return *this;
}

Fixed::~Fixed(void){
	std::cout << ("Destructor called") << std::endl;
}


//GetBits
int Fixed::getRawBits(void) const{
	return (this->value);
}
//SetBits
void	Fixed::setRawBits (int const raw){

	this->value = raw;
}

float	Fixed::toFloat(void) const{
	return (float)this->value / (float)(1 << bits);
}

int		Fixed::toInt(void) const{
	return this->value >> bits;
}
/*to overload an operator you need to use the keyword operator 
//followed by the actual operator you want to overload
//we need to give the function 2 parameters to operate
//The first is the actual output string 
//the second is a reference to our object*/
std::ostream& operator<<(std::ostream& s, const Fixed& value){

	s << value.toFloat();
	return s;
}