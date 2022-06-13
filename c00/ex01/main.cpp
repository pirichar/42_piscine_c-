#include "phonebook.hpp"

int main(){

	Phonebook phonebook; //ici par cette simple ligne 
						//je créer une variable instance 
						//qui est de type Phonebook
						//c'est donc une instance de la class Phonebook
						//phonebook est le moule à gateau 
						//instance est un des gâteaux que le moule peut faire
						//une ligne de code deux effets 
						//1-donner une variable type sample
						//2-le code qui était dans le constructeur va être exécuté

	return 0; //En sortant de ma fonction main le destructeur s'appelle automatiquement
}