#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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

/*ScavTrap main
int main(void){
	std::cout << "Constructor here\n";
	ClapTrap clap("BELLATRIX");
	ClapTrap clap1;
	ScavTrap paul("ALEANDRO");
	ScavTrap paul2;
	std::cout << "ClapTrap attack here\n";
	clap.attack("BELINDA");
	clap1.attack("BELINDA");
	std::cout << "ClapTrap healing here\n";
	clap.beRepaired(3);
	clap1.beRepaired(3);
	std::cout << "ClapTrap take damage here\n";
	clap.takeDamage(10);	
	clap1.takeDamage(10);	
	std::cout << "ScavTrap attack here\n";
	paul.attack("KARINA");
	paul2.attack("PAULINE");
	std::cout << "ScavTrap healing here\n";
	paul.beRepaired(3);
	paul2.beRepaired(3);
	std::cout << "ScavTrap take damage here\n";
	paul.takeDamage(10);
	paul2.takeDamage(10);
	std::cout << "ClapTrap copy constructor\n";
	ClapTrap copy(clap);
	ClapTrap popa;
	popa = copy;
	std::cout << "ScavTrap copy constructor\n";
	ScavTrap copy1(paul);
	ScavTrap popa1;
	popa1 = copy1;
	std::cout << "GateKeeper test\n";
	paul.guardGate();
	paul2.guardGate();
	copy1.guardGate();
	popa1.guardGate();
	std::cout << "Destructors\n";
}*/

int main(void){
	std::cout << "--------Constructor here--------\n";
	FragTrap fraggy;
	std::cout << "--------FragTrap attack here--------\n";
	fraggy.attack("POPA");
	std::cout << "--------FragTrap healing here--------\n";
	fraggy.beRepaired(10);
	std::cout << "--------FragTrap take damage here--------\n";
	fraggy.takeDamage(10);
	std::cout << "--------FragTrap copy constructor--------\n";
	FragTrap paul = fraggy;
	std::cout << "--------HighFive test--------\n";
	paul.HighFivesGuys();
	std::cout << "--------Destructors--------\n";
}