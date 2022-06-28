#include "ClapTrap.hpp"


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
}