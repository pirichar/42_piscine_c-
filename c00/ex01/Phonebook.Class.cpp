#include "Phonebook.Class.hpp"

void Phonebook::_SearchContact(void) const{
	std::string buffer;
	int nb;

	if (this->_nbContact == 0){
		std::cout << "You need to get friends to look for them... SIGHT!" << std::endl;
		return;
	}
	//afficher les contacts
	this->array[0].printInfo();
	for (int i = 0; i < this->_nbContact; i++){
		this->array[i].printPreview(i);
	}
	//afficher LE contact
	std::cout << "What position are you looking for : ";
	std::cin >> buffer;
	try {
		nb = std::stoi(buffer,nullptr);
	}
	catch(std::invalid_argument)  {
		std::cout << "Invalid index." << std::endl;
		return;
	}
	if (nb >= 0 && nb < this->_nbContact){
		this->array[nb].printContact();
	}
	else
		std::cout << "Invalid index." << std::endl;

}

void	Phonebook::_updateContact(void){

	int j = 7;
	int i = 6;
	while(i >= 0)
	{
		this->array[j] = this->array[i];
		i--;
		j--;
	}
}

void Phonebook::_getInput(void){
	std::string buffer;

	std::cout << "Please provide command (ADD, SEARCH, EXIT) : ";
	std::cin >> buffer;
	//if user type add :
	if (buffer == "ADD")
	{
		if(this->_nbContact < 8){
			this->array[this->_nbContact].createContact();
			std::cout << "Contact created at position "<< _nbContact << std::endl;
			this->_nbContact++;
			}
		else{
			this->_updateContact();
			this->array[0].createContact();
		}
	}
	else if (buffer =="SEARCH")
	{
		this->_SearchContact();
	}
	else if (buffer == "EXIT")
	{
		std::cout << "Byebye we deleted all of your data for safety...lulz...\nWhat a useless Phonebook I am" << std::endl;
		return;
	}
	this->_getInput();
}

/* Les constructeurs et les destructeurs en cpp n'ont pas de type de retour
   Ce sont des procédures , le return sert plus à dire que nous avons terminé */
Phonebook::Phonebook(void) : _maxContact(8), _nbContact(0){
	
	this->_getInput();
	return;
}

Phonebook::~Phonebook(void){

	// std::cout << "Destuctor called" << std::endl;
	return;
}

