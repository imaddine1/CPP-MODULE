#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "the default constructor is called\n";
}

Zombie::~Zombie()
{
	std::cout << "the deconstructor is called\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

