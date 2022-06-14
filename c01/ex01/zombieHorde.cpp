#include "Zombie.hpp"


Zombie*    zombieHorde( int N, std::string name ){

	Zombie *rtn = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		rtn[i].setName(name);
	}
	return (rtn);
 }