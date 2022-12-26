#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap param constructor is called\n";
	this->name = name;
	Hit = 100;
	Energy = 100;
	Attack_Damage = 30;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "i don't know what should i display here\n";
}


//orthodox canonical class form
FragTrap::FragTrap(void)
{
	std::cout << "Default constructor of derived class is called\n";
	this->name = "Unknown";
	Hit = 100;
	Energy = 100;
	Attack_Damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Default Destructor of derived class is called\n";
}

FragTrap::FragTrap(const FragTrap& st)
{
	std::cout << "Default copy constructor is called\n";
	*this = st;
}

FragTrap& FragTrap::operator=(const FragTrap& st)
{
	std::cout << "Copy assignment operator is called";
	this->name = st.name;
	this->Hit = st.Hit;
	this->Energy = st.Energy;
	this->Attack_Damage = st.Attack_Damage;
	return (*this);
}
