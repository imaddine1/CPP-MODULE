#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	void	guardGate(void);
	ScavTrap(std::string name);
	
	//orthodox canonical class form
	ScavTrap();
	ScavTrap(const ScavTrap& st);
	ScavTrap& operator=(const ScavTrap& st);
	~ScavTrap();
} ;


#endif