#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int i = 1; i < argc; i++)
		{
			int j = 0;
			while(argv[i][j])
			{
				std::cout << char(std::toupper(argv[i][j]));
				j++;
			}
			std::cout << ' ';
		}
	}
	else
		std::cout <<" * LOUD AND UNBEARABLE FEEDBACK NOISE * ";
	std::cout << std::endl;
	return (0);
}
