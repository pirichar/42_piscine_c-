#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();  //constructeur par défaut
		Dog(const Dog& old_obj); //constructeur de recopie
		Dog& operator=(const Dog& obj); //Operateur d'affectation
		~Dog(); //destructeur par virtuel
		// virtual ~Dog(); //destructeur par virtuel
		void	makeSound() const;
		// virtual void	makeSound() const;
		void	getType(void) const;

	protected:
		std::string type;

};



#endif