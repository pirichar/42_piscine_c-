#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
 
# include <iostream>
# include <string>
# include <cstring>

class Contact{

	public :

		Contact( void ); //constructeur
		~Contact( void ); //destructeur

		//printers
		void	printContact(void) const;
		void	printPreview(int i) const;
		void	printInfo(void) const;
		//Getters
		std::string	get_firstName(void) const;
		std::string	get_lastName(void) const;
		std::string	get_nickname(void) const;
		std::string	get_number(void) const;
		std::string	get_darkest(void) const;
		//Setters
		void	setFirstname(void);
		void	setLastname(void);
		void	setNickname(void);
		void	setNumber(void);
		void	setDarkest(void);
		void	createContact(void);

	private:				//all this cannot be empty
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _number;
		std::string _darkestSecret;

		std::string _format(std::string str) const;
};

#endif