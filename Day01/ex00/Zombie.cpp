#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "constructor is called\n";
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed\n";
}

Zombie*	newZombie(std::string name)
{
	Zombie*	z = new Zombie(name);

	return (z);
}

void	Zombie::announce(void)
{
	std::cout << "The name of zombie is " << name << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	randomChump(std::string name)
{
	Zombie	*z= new Zombie(name);
	z->announce();
	delete z;
}