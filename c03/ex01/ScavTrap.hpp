#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(const std::string& desired_name);
		ScavTrap(const ScavTrap& old_obj);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& obj);

		void	attack(const std::string& target);

	private:
};


#endif