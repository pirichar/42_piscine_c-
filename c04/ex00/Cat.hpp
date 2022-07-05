#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
	public:
		Cat();  //constructeur par défaut
		Cat(const std::string& given_type);  //constructeur par type
		Cat(const Cat& old_obj); //constructeur de recopie
		Cat& operator=(const Cat& obj); //Operateur d'affectation
		// ~Cat(); //destructeur par virtuel
		virtual ~Cat(); //destructeur par virtuel
		// void	makeSound() const;
		virtual void	makeSound() const;
};



#endif