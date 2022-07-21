#include <iostream>
#include <string>


int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Please provide only one literal to the program" << std::endl;
	}
	if (argv[1] == NULL){
		std::cerr << "Please provide a literal that is not an empty string" << std::endl;
	}

	//char
	//int
	//float
	//double
}