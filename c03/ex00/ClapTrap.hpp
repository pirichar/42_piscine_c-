#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

/*
Quand ClapTrapattaque,sacibleperd<attack damage>hitpoints.
Quand ClapTrap se répare, il regagne <amount> hit points. 
Les actions attaquer et réparer coûtent chacune 1 point d’énergie. 
Bien entendu, ClapTrap ne peut exécuter aucune action s’il n’a plus de vie ou d’énergie.

Pour toutes ces fonctions membres, vous devez afficher un message descriptif. 
Par exemple, la fonction attack() affichera quelque chose dans le genre 
(bien sûr, sans les chevrons) :
    ClapTrap <name> attacks <target>, causing <damage> points of damage!
*/

class ClapTrap{
	public :
		ClapTrap(const std::string& desired_name);
		ClapTrap(const ClapTrap& old_obj);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& obj);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);


	private :
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int	attackDamage;

};


#endif