#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed{
	private:
		int	value;
		const static int const_value;
	public:
		Fixed(); //constructeur ◦ Un constructeur par défaut qui initialisera la valeur du nombre à virgule fixe à 0.
		Fixed(const Fixed&); //constructeur de recopie
		~Fixed(); //destructeur
		Fixed &operator=(const Fixed&); //operator d'affectation 
		
		int	getRawBits(void) const; //qui retourne la valeur du nombre à virgule fixe sans la convertir.
		void	setRawBits (int const raw); //qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.



};


#endif