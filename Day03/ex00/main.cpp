#include "ClapTrap.hpp"

int main()
{
	ClapTrap	ct;

	ct.attack("Sakuna");
	ct.takeDamage(5);
	ct.beRepaired(2);
//	test to check the values is changed
	std::cout << ct.get_points();

	ct.attack("Alex");
	ct.takeDamage(UINT_MAX);
	ct.beRepaired(UINT_MAX);
	std::cout << ct.get_points();
	

	return (0);
}