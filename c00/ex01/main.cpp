#include "phonebook.h"

int main(){
	std::string buffer;
	Phonebook phonebook; //ici par cette simple ligne 
						//je créer une variable instance 
						//qui est de type Phonebook
						//c'est donc une instance de la class Phonebook
						//phonebook est le moule à gateau 
						//instance est un des gâteaux que le moule peut faire
						//une ligne de code deux effets 
						//1-donner une variable type sample
						//2-le code qui était dans le constructeur va être exécuté
	// Contact	contact;
	//printf a message to welcome the user and guide him
	while(1)
	{
		std::cout << "Please provide a valid command : " << std::endl;
		std::cin >> buffer;
		//if user type add :
		if (buffer.compare("ADD") == 0)
		{
			// ask are you sure you want to create a contact ?
			//---Call function in phonebook to add en entry---//
				//program prompt to the user to fill a new contact
				//add the contact to the phonebook
				//if the phonebook is full overwrite the phonebook
			//maybe you can display the contact with the same function as search
		}
		if (buffer.compare("SEARCH") == 0)
		{
		//if user type search :
			//ask what is the name of the person you are looking for
			//if it exist
				//prompt the desired table
				//desired table : index; first name; last name and nikcname
				//each column must be max 10 char and be separated by |
				//it must be right allign 
				//if the string is too long truncate and replace last
				//character displayed by a .
		}
		if (buffer.compare("EXIT") == 0)
		{
			break;
		//if the user type exit :
			//the program quit and everything shall be lost for ever
			 //EVERYTHING ELSE MUST BE IGNORED
		}
	}

	return 0; //En sortant de ma fonction main le destructeur s'appelle automatiquement
}