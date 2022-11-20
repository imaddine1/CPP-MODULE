#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << " is created\n";
}

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	this->name = name;
}
