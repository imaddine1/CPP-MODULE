#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& w)
{
	this->name = name;
	_weapon = &w;
}

void	HumanA::attack()
{
	std::cout << name << std::endl;
	std::cout << "attacks with their " << _weapon->getType() << std::endl;
}
