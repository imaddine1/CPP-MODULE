#include "Zombie.hpp"
#include <unistd.h>

void test()
{
	Zombie*	z1 = newZombie("Sakuna");
	z1->announce();
	delete z1;
	randomChump("hanma");
}

int	main()
{
	test();
	return (0);
}
