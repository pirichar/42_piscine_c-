#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	public:
		Brain();
		Brain(const Brain& obj);
		~Brain();
		const Brain& operator=(const Brain& obj);

		//get ideas
		const std::string&	getIdeas(const int position);
		//set ideas
		void setIdeas(const std::string& idea, const int position);
	private:
		std::string ideas[100];
		
};

#endif