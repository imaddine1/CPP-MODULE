#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon& we)
{
	this->weapon = &we;
}

void	HumanB::attack()
{
	std::cout << this->name << std::endl;
	std::cout << "attacks with their " << this->weapon->getType() << std::endl;
}
