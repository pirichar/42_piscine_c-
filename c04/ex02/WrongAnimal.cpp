#include "WrongAnimal.hpp"

// constructeur par défaut
WrongAnimal::WrongAnimal() : type("I am nothing yet") {
    std::cout << ("WrongAnimal default constructor callded") << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& given_type) : type(given_type) {
    std::cout << ("WrongAnimal name constructor callded") << std::endl;
}

// constructeur de copie
WrongAnimal::WrongAnimal(const WrongAnimal& old_obj) {
    std::cout << ("WrongAnimal Copy constructor called") << std::endl;
    *this = old_obj;
}

// desctructeur par défaut
WrongAnimal::~WrongAnimal() {
    std::cout << ("WrongAnimal Destructor called") << std::endl;
}

// opérateur de recopie
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    this->type = obj.type;
    return *this;
}

// make sound
void WrongAnimal::makeSound() const {
    std::cout << "WRONG MIAW FROM WRONGANIMAL" << std::endl;
}

// geType
std::string WrongAnimal::getType() const {
    return this->type;
}

// Overload << operator
std::ostream& operator<<(std::ostream& s, const WrongAnimal& value) {
    s << value.getType();
    return s;
}
