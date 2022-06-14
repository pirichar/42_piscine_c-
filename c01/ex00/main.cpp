#include "Zombie.hpp"



int		main(void)
{
	randomChump("Toby");

	Zombie *zom = newZombie("Tommy");
	zom->printName();
	
	delete zom;
	return (0);
}