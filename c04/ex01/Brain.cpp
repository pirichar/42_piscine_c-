#include "Brain.hpp"

Brain::Brain(){
	std::cout << ("Brain Default constructor callded") << std::endl;}

Brain::Brain(const Brain& obj){
	std::cout << ("Brain copy constructor callded") << std::endl;
}

Brain::~Brain(){
	std::cout << ("Brain destructor callded") << std::endl;
}

const Brain& Brain::operator=(const Brain& obj){
	std::cout << ("Brain copy assignment operator callded") << std::endl;
	for(int i = 0; i < 100; i++){
		this->ideas[i] = obj.ideas[i];
	}
}

const std::string& Brain::getIdeas(const int position){
	return this->ideas[position];
}

void	Brain::setIdeas(const std::string& idea, const int position){
	this->ideas[position] = idea;
}

