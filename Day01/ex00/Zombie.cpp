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
	std::cout << "parametrized constructor is called\n";
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}