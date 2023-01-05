#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain
{
	private:
		std::string ideas[100];
	public:
	// OCCF
	Brain(void);
	Brain(const Brain& an);
	Brain& operator=(const Brain& an);
	~Brain(void);

	
};

#endif