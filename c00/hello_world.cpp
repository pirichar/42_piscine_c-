#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char buff[512];	

	std::cout << "hello world !" << std::endl;

	std::cout << "Type a word: ";
	std::cin >> buff;
	std::cout << "You entered [" << buff << "]" << std::endl;
}