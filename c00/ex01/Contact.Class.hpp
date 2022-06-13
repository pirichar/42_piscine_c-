#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include "phonebook.h"

class Contact{

	public :

		Contact( void ); //constructeur
		~Contact( void ); //destructeur

		//Getters
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_number(void) const;
		std::string	get_darkest(void) const;
		//Setters
		void	set_first_name(void);
		void	set_last_name(void);
		void	set_nickname(void);
		void	set_number(void);
		void	set_darkest(void);

	private:				//all this cannot be empty
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _number;
		std::string _darkest_secret;
};



#endif