#include "Zombie.hpp"

//argv[0] pgm
//argv[1] NB_ZOM
//argv[2] Zom name

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		int n = std::stoi(argv[1]);
		Zombie *zom;
		zom = zombieHorde(n, argv[2]);
		for(int i = 0; i < n; i++)
		{
			zom[i].printName();
		}
		delete [] zom;
	}
	else
		std::cout << "Please provide 2 arguments to your command : number of Zombies, Name of zombies" << std::endl;
	return (0);
}