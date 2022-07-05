#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();                                // constructeur par défaut
    WrongCat(const std::string& given_type);   // constructeur par type
    WrongCat(const WrongCat& old_obj);         // constructeur de recopie
    WrongCat& operator=(const WrongCat& obj);  // Operateur d'affectation
    ~WrongCat();                               // destructeur par virtuel
};

#endif