#include "Harl.hpp"

void	print_error(void){
	std::cout << "Please provide a complain for Harl\n";
	std::cout << "Use : DEBUG, INFO, WARNING or ERROR\n";
}
int main(int argc, char **argv){
	if (argc == 2){
		std::string str(argv[1]);
		// if (str != "DEBUG" || str != "INFO" || str != "WARNING" || str != "ERROR")
		// {
		// 	print_error();
		// 	return 1;
		// }
		Harl harl;
		harl.complain(str);
	}
	else{
		print_error();
		return 1;
	}
	return 0;
}