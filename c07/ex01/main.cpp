#include "iter.hpp"
#include <string>

int main(){
	char	array[10] = {"Paul Paul"};
	std::string Paul[4] = {"Pauline", "Paulette", "Poliement", "Papier"};


	iter(array,10,print_T);
	iter(Paul,4,print_T);
	
}