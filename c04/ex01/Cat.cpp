#include "Cat.hpp"

//constructeur par défaut
Cat::Cat(): Animal("Cat"), brain(new Brain()){
	std::cout << ("Cat Default constructor callded") << std::endl;
}

//constructeur avec nom
Cat::Cat(const std::string& given_name): Animal(given_name), brain(new Brain()){
	std::cout << ("Cat name constructor callded") << std::endl;
}

//constructeur de copie
Cat::Cat(const Cat& old_obj){
	std::cout << ("Cat Copy constructor called") << std::endl;
	*this = old_obj;
}

//desctructeur par défaut
Cat::~Cat(){
	std::cout << ("Cat Destructor called") << std::endl;
	delete brain;
}

//opérateur de recopie
Cat& Cat::operator=(const Cat& obj){
	
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->type = obj.type;
	for (int i = 0; i < 100; i++){
		brain->setIdeas(obj.brain->getIdeas(i),i);
	}
	return *this;
}


//make sound
void	Cat::makeSound() const{
	std::cout << "🐈MIAWM" << std::endl;
}


//make sound
void	Cat::getType() const{
	std::cout << this->type << std::endl;
}