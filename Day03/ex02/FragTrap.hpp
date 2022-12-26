#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap(std::string name);
	void	highFivesGuys(void);
	//orthodox canonical class form
	FragTrap();
	FragTrap(const FragTrap& st);
	FragTrap& operator=(const FragTrap& st);
	~FragTrap();
};

#endif