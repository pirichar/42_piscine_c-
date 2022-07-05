#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
    Dog();                               // constructeur par défaut
    Dog(const std::string& given_type);  // constructeur par type
    Dog(const Dog& old_obj);             // constructeur de recopie
    Dog& operator=(const Dog& obj);      // Operateur d'affectation
    virtual ~Dog();  // destructeur par virtuel
    virtual void makeSound() const;

protected:
    Brain*      brain;
};

#endif