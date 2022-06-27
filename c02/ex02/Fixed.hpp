#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <cmath>
#include <iostream>

class Fixed{
	private:
		int	value;
		const static int bits;
	public:
		Fixed(); //constructeur ◦ Un constructeur par défaut qui initialisera la valeur du nombre à virgule fixe à 0.
		Fixed(const int entier); //constructeur d'entier constant
		Fixed(const float flottant); //constructeur d'entier constant
		Fixed(const Fixed& old_obj); //constructeur de recopie
		~Fixed(); //destructeur

		Fixed& operator=(const Fixed& obj); //operator d'affectation 

		//6 opérateurs de comparaisons
		//ces opérateurs vont retourner vrai ou faux
		// en fonction de
		bool	operator>(const Fixed&) const;
		bool	operator<(const Fixed&) const;
		bool	operator>=(const Fixed&) const;
		bool	operator<=(const Fixed&) const;
		bool	operator==(const Fixed&) const;
		bool	operator!=(const Fixed&) const;

		//4 opérateurs arithmétiques
		Fixed	operator+(const Fixed&) const;
		Fixed	operator-(const Fixed&) const;
		Fixed	operator*(const Fixed&) const;
		Fixed	operator/(const Fixed&) const;

		//4 opérateurs d'incrémentations
		Fixed	operator++(int); 
		Fixed	operator--(int);
		Fixed&	operator++();
		Fixed&	operator--();

		//Fonctions de membre publique surchargées
		static Fixed&  min(Fixed& f1, Fixed& f2);
		static const Fixed&  min(const Fixed& f1, const Fixed& f2);
		static Fixed& max(Fixed& f1, Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
		
		int		getRawBits(void) const; //qui retourne la valeur du nombre à virgule fixe sans la convertir.
		void	setRawBits (int const raw); //qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
		float	toFloat(void) const;//qui convertit la valeur en virgule fixe en nombre à virgule flottante.
		int		toInt(void) const;//qui convertit la valeur en virgule fixe en nombre entier.


};
/*to overload an operator you need to use the keyword operator 
//followed by the actual operator you want to overload
//we need to give the function 2 parameters to operate
//The first is the actual output string 
//the second is a reference to our object*/
std::ostream& operator<<(std::ostream& s, const Fixed& value);

#endif