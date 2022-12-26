#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap(std::string name)//:ClapTrap(name)
{
	std::cout << "Default paramethrized constructor\n";
	this->name = name;
	Hit = 100;
	Energy = 50;
	Attack_Damage = 20;
}

//orthodox canonical form class
ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor of derived class is called\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Default Destructor of derived class is called\n";
}

ScavTrap::ScavTrap(const ScavTrap& st)
{
	std::cout << "Default copy constructor is called\n";
	*this = st;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
	std::cout << "Copy assignment operator is called";
	this->name = st.name;
	this->Hit = st.Hit;
	this->Energy = st.Energy;
	this->Attack_Damage = st.Attack_Damage;
	return (*this);
}



