#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string		name;
		unsigned int	Hit;
		unsigned int	Energy;
		unsigned int	Attack_Damage;
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap(std::string name);
		std::string get_points() const;
		// orthodox canonical class form 
		ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& Clap);
		~ClapTrap();

};

#endif