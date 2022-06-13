#include "phonebook.h"

/* Les constructeurs et les destructeurs en cpp n'ont pas de type de retour
   Ce sont des procédures , le return sert plus à dire que nous avons terminé */
Contact::Contact(void){
	
	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){

	std::cout << "Destuctor called" << std::endl;
	return;
}

std::string Contact::get_first_name(void) const{
	return this->_first_name;
}

std::string Contact::get_last_name(void) const{
	return this->_last_name;
}

std::string Contact::get_nickname(void) const{
	return this->_nickname;
}

std::string Contact::get_number(void) const{
	return this->_number;
}

std::string Contact::get_darkest(void) const{
	return this->_darkest_secret;
}

void Contact::set_first_name(void){
	std::cout << "First name : " << std::endl;
	std::cin >> this->_first_name;
	return;
}

void Contact::set_last_name(void){
	std::cout << "Last name : " << std::endl;
	std::cin >> this->_last_name;
	return;
}

void Contact::set_nickname(void){
	std::cout << "Nick name : " << std::endl;
	std::cin >> this->_nickname;
	return;
}

void Contact::set_number(void){
	std::cout << "Phone number : " << std::endl;
	std::cin >> this->_number;
	return;
}

void Contact::set_darkest(void){
	std::cout << "Darkest secret : " << std::endl;
	std::cin >> this->_darkest_secret;
	return;
}