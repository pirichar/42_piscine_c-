#include "phonebook.h"

/* Les constructeurs et les destructeurs en cpp n'ont pas de type de retour
   Ce sont des procédures , le return sert plus à dire que nous avons terminé */
Phonebook::Phonebook(void){
	
	std::cout << "Hello and welcome to your phonebook" << std::endl;
	std::cout << "Valid commands are : ADD, SEARCH or EXIT" << std::endl;
	return;
}

Phonebook::~Phonebook(void){

	// std::cout << "Destuctor called" << std::endl;
	return;
}