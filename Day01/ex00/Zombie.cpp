#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "constructor is called\n";
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << "The name of zombie is " << name << std::endl;
}