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
	std::cout << "positive high fives\n";
}

//orthodox canonical class form
FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor of derived class is called\n";
	Hit = 100;
	Energy = 100;
	Attack_Damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Default Destructor of derived class is called\n";
}

FragTrap::FragTrap(const FragTrap& st)
{
	std::cout << "FragTrap Default copy constructor is called\n";
	*this = st;
}

FragTrap& FragTrap::operator=(const FragTrap& st)
{
	std::cout << "FragTrap Copy assignment operator is called\n";
	this->name = st.name;
	this->Hit = st.Hit;
	this->Energy = st.Energy;
	this->Attack_Damage = st.Attack_Damage;
	return (*this);
}
