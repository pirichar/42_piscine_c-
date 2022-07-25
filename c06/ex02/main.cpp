#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

#include <ctime>
#include <iostream>
#include <cstdlib>


/*
	Generating random using rand and the srand in main
*/
Base*	generate(void){

	int random = rand() % 3;

	switch (random){
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

/*
	Here we just use the fact that the dynamic cast 
	will return NULL if the cast doesnt work
*/
void	identify(Base* p){
	if (dynamic_cast<A*>(p)){
		std::cout << "A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p)){
		std::cout << "B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p)){
		std::cout << "C" << std::endl;
		return;
	}
	std::cout << "Could not identify" << std::endl;
}

/*
	Here we use the fact that if a dynamic cast fails on a reference
	it will throw an error ; its that simple :)
*/
void identify(Base& p){
	try{
		A& a1 = dynamic_cast<A&>(p);
		(void)a1;
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception&){
	}
	try{
		B& b1 = dynamic_cast<B&>(p);
		(void)b1;
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception&){
	}
	try{
		C& c1 = dynamic_cast<C&>(p);
		(void)c1;
		std::cout << "C" << std::endl;
		return;
	} catch (std::exception&){
	}
	std::cout << "Could not identify" << std::endl;
}

int main(){
	srand(static_cast<unsigned int>(time(NULL)));

	for (int i = 0; i < 11; i++){
		Base* ptr = generate();
		identify(ptr);
		identify(*ptr);

		if (i < 10){
			std::cout << std::endl;
		}
	}
}