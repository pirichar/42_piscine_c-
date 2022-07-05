#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
	Animal *animals[100];

	for(int i = 0; i < 50; i++){
		animals[i] = new Dog();
	}
	for(int i = 50; i < 100; i++){
		animals[i] = new Cat();
	}

	for(int i = 0; i < 100; i++){
		animals[i]->makeSound();
	}

	for(int i = 0; i < 100; i++){
		delete animals[i];
	}
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Dog dog;
	// Animal jetaichoisi;

	Dog petit_dog = dog;
	
	delete j;//should not create a leak 
	delete i;
	return 0;
}