#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
    Cat();                               // constructeur par défaut
    Cat(const std::string& given_type);  // constructeur par type
    Cat(const Cat& old_obj);             // constructeur de recopie
    Cat& operator=(const Cat& obj);      // Operateur d'affectation
    virtual ~Cat();  // destructeur par virtuel
    virtual void makeSound() const;

protected:
    Brain*      brain;
};

#endif