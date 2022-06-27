#include "Fixed.hpp"

const int Fixed::bits = 8;
/*Constructor and stuff*/
Fixed::Fixed() : value(0){
	// std::cout << ("Default constructor callded") << std::endl;
}
Fixed::Fixed(const int entier) : value(entier << bits){
	// std::cout << ("Int constructor callded") << std::endl;
}
//This funny method is just creating a new int with the informations of the float inside
Fixed::Fixed(const float flottant) : value((int)roundf(flottant * (float)(1 << bits))){

	// std::cout << ("Float constructor callded") << std::endl;
}
Fixed::Fixed(const Fixed& old_obj){
	// std::cout << ("Copy constructor called") << std::endl;
	*this = old_obj;
}
Fixed& Fixed::operator=(const Fixed& obj){

	// std::cout << "Copy assignment operator called" << std::endl;
	if (&obj != this)
		this->value = obj.getRawBits();

	return *this;
}
Fixed::~Fixed(void){
	// std::cout << ("Destructor called") << std::endl;
}

/*Getter and setter*/
int Fixed::getRawBits(void) const{
	return (this->value);
}
void	Fixed::setRawBits (int const raw){

	this->value = raw;
}

/*From int to float from float to int*/
float	Fixed::toFloat(void) const{
	return (float)this->value / (float)(1 << bits);//divisé par 2 à la 8
}
int		Fixed::toInt(void) const{
	return this->value >> bits; //multiplié par 2 à la 8
}

/*6 Comp operators*/
bool	Fixed::operator>(const Fixed& to_cmp) const{
	return(getRawBits() > to_cmp.getRawBits());
}
bool	Fixed::operator<(const Fixed& to_cmp) const{
	return(getRawBits() < to_cmp.getRawBits());
}
bool	Fixed::operator>=(const Fixed& to_cmp) const{
	return(getRawBits() >= to_cmp.getRawBits());
}
bool	Fixed::operator<=(const Fixed& to_cmp) const{
	return(getRawBits() <= to_cmp.getRawBits());
}
bool	Fixed::operator==(const Fixed& to_cmp) const{
	return(getRawBits() == to_cmp.getRawBits());
}
bool	Fixed::operator!=(const Fixed& to_cmp) const{
	return(getRawBits() != to_cmp.getRawBits());
}

/*4 arithmetic operatos*/
Fixed	Fixed::operator+(const Fixed& to_add) const{

	Fixed rtn;

	rtn.setRawBits(this->getRawBits() + to_add.getRawBits());
	return rtn;
}
Fixed	Fixed::operator-(const Fixed& to_add) const{

	Fixed rtn;

	rtn.setRawBits(this->getRawBits() - to_add.getRawBits());
	return rtn;
}
Fixed	Fixed::operator*(const Fixed& to_add) const{

	Fixed rtn;

	long result = (this->getRawBits() * to_add.getRawBits());
	rtn.setRawBits((int)result >> bits); //here you have to bitshift in order to set back the number to 24.8 
	return rtn;
}
Fixed	Fixed::operator/(const Fixed& to_add) const{

	Fixed rtn;

	long result = ((long)this->getRawBits() << bits) / (long)to_add.getRawBits();
	rtn.setRawBits((int)result);
	return rtn;
}

/*4 arithmetic operatos*/
//postfix increment/decrement
Fixed	Fixed::operator++(int){
	Fixed rtn(*this); //copie de la classe courante dans rtn

	this->value++; //augmenter la valeur de la classe actuel
	return rtn; // retourner la copie de la classe sans augmentation 
}
Fixed	Fixed::operator--(int){
	Fixed rtn(*this);

	this->value++;
	return rtn;
}
//prefix increment / decrement
Fixed&	Fixed::operator++(){
	this->value++;
	return *this;
}
Fixed&	Fixed::operator--(){
	this->value--;
	return *this;
}

/*4 overcharged public memberfunctions*/
//These functions uses ternary Operator
// variable = (condition) ? expressionTrue : expressionFalse;
Fixed& Fixed::min(Fixed &f1, Fixed& f2){
	return (f1 < f2 ? f1:f2);
}
const Fixed& Fixed::min(const Fixed &f1, const Fixed& f2){
	return (f1 < f2 ? f1:f2);
}
Fixed& Fixed::max(Fixed &f1, Fixed& f2){
	return (f1 > f2 ? f1:f2);
}
const Fixed& Fixed::max(const Fixed &f1, const Fixed& f2){
	return (f1 > f2 ? f1:f2);
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