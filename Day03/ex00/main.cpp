#include "ClapTrap.hpp"

int main()
{
	ClapTrap	ct;

	ct.attack("imad");
	ct.takeDamage(5);
	ct.beRepaired(30);
//	test to check the values is changed
	std::cout << ct.get_points();
	return (0);
}