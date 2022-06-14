#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <string>

class Zombie{
	public :

			Zombie	(void);
			~Zombie	(void);

			std::string	getName(void) const;
			void		setName(std::string name);
			void		printName(void) const;

	private :
			std::string _name;


};



#endif