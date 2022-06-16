#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

//arg[0] - PGM
//argv[1] - FILENAME
//argv[2] - S1
//argv[3] - S2

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string line;
		std::stringstream ss;
		ss << argv[1] << ".replace";
		std::string out = ss.str();
		std::ifstream infile(argv[1]);
		std::string s1(argv[2]);
		std::string s2(argv[3]);

		if (s1.empty () || s2.empty()){
			std::cerr << "Please provide strings with content\n";
			return 1;
		}
		if (infile.is_open()){
			std::ofstream outfile(out);
			while(getline(infile,line)){
				if(outfile.is_open()){
					//copy string and validate the logic of finding a word
					size_t index = line.find(s1, 0); //search the word and return its positior or -1
					while (index != std::string::npos){
						line.erase(index, s1.length());
						line.insert(index, s2);
						index = index + s2.length(); // ici je déplace mon pointeur après le nouveau mot que je viens d'écrire
						index = line.find(s1, index);//ici je vérifie dans ma string s'il reste des s1
					}
						outfile << line << std::endl;
				}
				else{
					std::cerr << "Could not open output file\n";
					return 1;
				}
			}
			std::cout << "Copy done look at " << argv[1] << ".replace to see the result\n";
			infile.close();
			outfile.close();
		}
		else{
			std::cerr << "Please provide a valid filename\n";
			return 1;
		}
	}
	else{
		std::cerr << "Provide a filename, a string one and a string two please"<< std::endl;
		return 1;
	}
	return 0;
}