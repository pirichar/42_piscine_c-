#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA{

	public:
		HumanA(const std::string& name, Weapon &weapon);
		~HumanA(void);
		void	attack(void) const;// <name> attacks with their <weapon type>
		

	private:
		std::string _name;
		Weapon 		&_weapon;
};



#endif