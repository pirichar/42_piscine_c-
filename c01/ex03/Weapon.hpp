#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string.h>
# include <cstring>
# include <cstdlib>


class Weapon{


	public:
		Weapon(const std::string& type);
		~Weapon(void);

		std::string getType(void) const;
		void		setType(std::string type);


	private:
		std::string _type;



};




#endif