#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/* ex00 main
int main(void){

	ClapTrap clap("John");
	for (int i = 1; i <= 10; i++){
	std::cout << "attack # " << i << std::endl;
	clap.attack("BELINDA");
	}
	clap.takeDamage(10);	
	// clap.beRepaired(10);

	for (int i = 1; i <= 3; i++){
		std::cout << "Failed attack # " << i << std::endl;
		clap.attack("BELINDA");
		}
	ClapTrap copy(clap);
	ClapTrap popa("steve");
}*/


int main(void){
	ClapTrap clap("BELLATRIX");
	ClapTrap clap1;
	ScavTrap paul("ALEANDRO");
	ScavTrap paul2;
	clap.attack("BELINDA");
	clap.beRepaired(3);
	clap.takeDamage(10);	
	paul.attack("KARINA");
	paul.attack("PAULINE");
	ClapTrap copy(clap);
	ClapTrap popa("steve");
}