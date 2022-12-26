#include "ScavTrap.hpp"

int main()
{
	ScavTrap	st;

	st.attack("joe");
	st.takeDamage(30);
	st.beRepaired(10);
	std::cout << st.get_points();
	st.guardGate();
	return (0);
}