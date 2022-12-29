#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << " is created\n";
}

Zombie::Zombie()
{
	std::cout << "Default constructor is called\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed\n";
}