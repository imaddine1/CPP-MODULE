#include "FragTrap.hpp"

int main()
{
	FragTrap ft;

	std::cout << ft.get_points();
	std::cout << "-------------------------------\n";
	ft.attack("oldOne");
	ft.takeDamage(10);
	ft.beRepaired(5);
	std::cout << ft.get_points();
	ft.highFivesGuys();
	std::cout << "*********************\n";
	FragTrap ft2 = ft;
	std::cout << "-------------------------------\n";
	std::cout << ft2.get_points();
	std::cout <<  "-------------------------------\n";
	ft2.attack("oldOne");
	ft2.takeDamage(10);
	ft2.beRepaired(5);
	std::cout << ft2.get_points();
	ft2.highFivesGuys();
	return (0);
}