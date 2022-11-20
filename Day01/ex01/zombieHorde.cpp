#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int		i = -1;
	Zombie* z = new Zombie[N];

	while (++i < N)
		z[i] = Zombie(name);
	return (z);
}