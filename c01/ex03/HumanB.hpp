#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB{

	public:
		HumanB(const std::string& name);
		~HumanB(void);
		void	attack(void) const;// <name> attacks with their <weapon type>
		void	setWeapon(Weapon &weapon);


	private:
		std::string _name;
		Weapon 		*_weapon;
};



#endif