#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	public:
		Dog();  //constructeur par défaut
		Dog(const std::string& given_type);  //constructeur par type
		Dog(const Dog& old_obj); //constructeur de recopie
		Dog& operator=(const Dog& obj); //Operateur d'affectation
		// ~Dog(); //destructeur par virtuel
		virtual ~Dog(); //destructeur par virtuel
		// void	makeSound() const;
		virtual void	makeSound() const;
		void	getType(void) const;

	protected:
		std::string type;
		Brain	*brain;

};



#endif