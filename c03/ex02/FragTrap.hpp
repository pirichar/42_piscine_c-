#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
		FragTrap();
		FragTrap(const std::string& desired_name);
		FragTrap(const FragTrap& old_obj);
		~FragTrap();
		FragTrap& operator=(const FragTrap& obj);

		void	attack(const std::string& target);
		void	HighFivesGuys() const;

	private:
};


#endif