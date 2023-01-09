#include "ScavTrap.hpp"

int main()
{
	ScavTrap	st("imad");


	std::cout << st.get_points();
	st.attack("joe");
	st.takeDamage(30);
	st.beRepaired(1);
	std::cout << st.get_points();
	st.guardGate();
	return (0);
}