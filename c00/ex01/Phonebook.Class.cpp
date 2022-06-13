#include "phonebook.hpp"
//Contact class
Contact::Contact(void){
	
	// std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){

	// std::cout << "Destuctor called" << std::endl;
	return;
}

std::string Contact::get_firstName(void) const{
	return this->_firstName;
}

std::string Contact::get_lastName(void) const{
	return this->_lastName;
}

std::string Contact::get_nickname(void) const{
	return this->_nickname;
}

std::string Contact::get_number(void) const{
	return this->_number;
}

std::string Contact::get_darkest(void) const{
	return this->_darkestSecret;
}

void Contact::setFirstname(void){
	std::cout << "First name : ";
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
	std::getline(std::cin, this->_firstName);
	return;
}

void Contact::setLastname(void){
	std::cout << "Last name : ";
	std::getline(std::cin, this->_lastName);
	return;
}

void Contact::setNickname(void){
	std::cout << "Nickname : ";
	std::getline(std::cin,this->_nickname);
	return;
}

void Contact::setNumber(void){
	std::cout << "Phone number : ";
	std::getline(std::cin,this->_number);
	return;
}

void Contact::setDarkest(void){
	std::cout << "Darkest secret : ";
	std::getline(std::cin,this->_darkestSecret);
	return;
}

void	Contact::createContact(void){
	this->setFirstname();
	this->setLastname();
	this->setNickname();
	this->setNumber();
	this->setDarkest();
}
void	Contact::printContact(void) const{
	std::cout << "FIRST NAME : " << this->_firstName << std::endl;
	std::cout << "LAST NAME : " << this->_lastName << std::endl;
	std::cout << "NICKNAME : " << this->_nickname << std::endl;
	std::cout << "NUMBER : " << this->_number << std::endl;
	std::cout << "THE DARKEST SECRET : " << this->_darkestSecret << std::endl;
}


std::string	Contact::_format( std:: string str) const {

	std::string rtn;

	if (str.length() >= 9){
		rtn = str.substr(0,9) + '.';
	}
	else{
		rtn = str;
	}
	return rtn;
}
void	Contact::printInfo(void) const{
	std::cout.width(10); std::cout << "Index" << "|";
	std::cout.width(10); std::cout << "firsName" << "|";
	std::cout.width(10); std::cout << "lastName" << "|";
	std::cout.width(10); std::cout << "nickName" << "|" << std::endl;
	std::cout.width(40); std::cout << "----------------------------------------" << std::endl;
}
void	Contact::printPreview(int i) const {
	std::cout.width(10); std::cout << i << "|";
	std::cout.width(10); std::cout << this->_format(this->_firstName)  << "|";
	std::cout.width(10); std::cout << this->_format(this->_lastName) << "|";
	std::cout.width(10); std::cout  << this->_format(this->_nickname) << "|" << std::endl;
	return;
}
/*------------------------Phonebook Class-------------------*/

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
		nb = std::stoi (buffer,nullptr);
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
void Phonebook::_getInput(void){
	std::string buffer;

	std::cout << "Please provide command (ADD, SEARCH, EXIT) : ";
	std::cin >> buffer;
	//if user type add :
	if (buffer.compare("ADD") == 0)
	{
		if(this->_nbContact < 8){
			this->array[this->_nbContact].createContact();
			std::cout << "Contact created at position "<< _nbContact << std::endl;
			this->_nbContact++;
			}
	}
	else if (buffer.compare("SEARCH") == 0)
	{
		this->_SearchContact();
	}
	else if (buffer.compare("EXIT") == 0)
	{
		std::cout << "Byebye we deleted all of your data for safety...lulz" << std::endl;
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

