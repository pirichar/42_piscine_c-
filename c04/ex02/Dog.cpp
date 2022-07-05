#include "Dog.hpp"

// constructeur par défaut
Dog::Dog() : Animal("Dog"), brain(new Brain()) {
    std::cout << ("Dog Default constructor callded") << std::endl;
}

// constructeur avec nom
Dog::Dog(const std::string& given_name) : Animal(given_name), brain(new Brain()) {
    std::cout << ("Dog name constructor callded") << std::endl;
}

// constructeur de copie
Dog::Dog(const Dog& old_obj): Animal(), brain(new Brain()) {
    std::cout << ("Dog Copy constructor called") << std::endl;
    *this = old_obj;
}

// desctructeur par défaut
Dog::~Dog() {
    std::cout << ("Dog Destructor called") << std::endl;
    delete brain;
}

// opérateur de recopie
Dog& Dog::operator=(const Dog& obj) {
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->type = obj.type;
    return *this;
}

// make sound
void Dog::makeSound() const {
    std::cout << "🐕LOUD PEE NOISE; SHIT ITS ON YOUR LEG" << std::endl;
}