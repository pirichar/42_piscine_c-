#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();                                   // constructeur par défaut
    WrongAnimal(const std::string& given_type);      // constructeur par type
    WrongAnimal(const WrongAnimal& old_obj);         // constructeur de recopie
    WrongAnimal& operator=(const WrongAnimal& obj);  // Operateur d'affectation
    ~WrongAnimal();                                  // destructeur virtuel
    void        makeSound() const;
    std::string getType() const;

protected:
    std::string type;
};

std::ostream& operator<<(std::ostream& s, const WrongAnimal& value);
#endif