#include "Zombie.hpp"

 Zombie* newZombie( std::string name ){

	 Zombie *returnZombie = new Zombie;

	 returnZombie->setName(name);

	 return returnZombie;
 }