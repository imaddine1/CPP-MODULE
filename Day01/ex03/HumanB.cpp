#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon& we)
{
	this->weapon = &we;
}

void	HumanB::attack()
{
	if (!this->weapon)
	{
		std::cout << "i don't have a weapon\n";
		return ;
	}
	std::cout << this->name << std::endl;
	std::cout << "attacks with their " << this->weapon->getType() << std::endl;

}
