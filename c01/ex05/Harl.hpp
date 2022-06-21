#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream> 

class Harl{
	public:
		Harl(void);
		~Harl(void);

	void	complain(const std::string& level) const;

	private:
		void	_debug(void) const;
		void	_info(void) const;
		void	_warning(void) const;
		void	_error(void) const;
		std::string levels[4];
   		void (Harl::*actions[4])() const;

};


#endif