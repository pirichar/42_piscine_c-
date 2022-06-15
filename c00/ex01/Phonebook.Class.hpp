#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
 
 # include "Contact.Class.hpp"
 
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
		void	_updateContact(void);
		//add contact function
			//call a new contact class and put it into the array?
		//search and display contact function 
			//id = array pos + 1
		//array of 8 contact ?
};



#endif