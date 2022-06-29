#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* meta = new Animal();

const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << meta->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete i;
delete j;

const WrongAnimal* meta1 = new WrongAnimal();
j = new Dog();
const WrongAnimal* i1 = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i1->getType() << " " << std::endl;
std::cout << meta1->getType() << " " << std::endl;
i1->makeSound(); //will output the wrongcat sound coming from Animal!
j->makeSound();
meta1->makeSound();

delete meta1;
delete i1;
delete j;




return 0;
}