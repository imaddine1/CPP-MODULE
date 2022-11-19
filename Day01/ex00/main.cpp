#include "Zombie.hpp"


int	main()
{
	Zombie*	z1 = newZombie("Sakuna");
	z1->announce();
	delete z1;
	randomChump("hanma");
	//system ("leaks test");
	return (0);
}