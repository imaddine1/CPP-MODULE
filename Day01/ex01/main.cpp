#include "Zombie.hpp"

int	main()
{
	Zombie*	z = zombieHorde(5, "skirt");
	int i = -1;
	while (++i < 5)
		z[i].announce();
	delete[] z;
//	system ("leaks GrpZombie");
	return (0);
}