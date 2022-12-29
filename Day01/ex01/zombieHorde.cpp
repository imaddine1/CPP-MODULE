#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "check is your number is positive\n";
		exit(0);
	}
	int		i = -1;
	Zombie* z = new Zombie[N];

	while (++i < N)
		z[i].set_name(name);
	return (z);
}