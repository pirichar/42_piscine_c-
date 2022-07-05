#include "WrongCat.hpp"

//constructeur par défaut
WrongCat::WrongCat(): WrongAnimal("WrongCat"){
	std::cout << ("WrongCat Default constructor callded") << std::endl;
}

//constructeur avec nom
WrongCat::WrongCat(const std::string& given_name): WrongAnimal(given_name){
	std::cout << ("WrongCat name constructor callded") << std::endl;
}

//constructeur de copie
WrongCat::WrongCat(const WrongCat& old_obj){
	std::cout << ("WrongCat Copy constructor called") << std::endl;
	*this = old_obj;
}

//desctructeur par défaut
WrongCat::~WrongCat(){
	std::cout << ("WrongCat Destructor called") << std::endl;
}

//opérateur de recopie
WrongCat& WrongCat::operator=(const WrongCat& obj){
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	this->type = obj.type;
	return *this;
}