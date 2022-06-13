#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
 
# include "phonebook.hpp"

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


class Phonebook{

	public :
		Phonebook(void); //constructeur
		~Phonebook(void); //destructeur

	private :
		int const	_maxContact;
		int			_nbContact;
		Contact		array[8];

		//functions
		void	_addContact(void);
		void	_getInput(void);
		void	_SearchContact(void) const;
		void	_searchContact(void) const;
		//add contact function
			//call a new contact class and put it into the array?
		//search and display contact function 
			//id = array pos + 1
		//array of 8 contact ?
};



#endif