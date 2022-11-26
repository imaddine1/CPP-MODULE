#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& w):_weapon(w)
{
	this->name = name;
}

void	HumanA::attack()
{
	std::cout << name << std::endl;
	std::cout << "attacks with their " << _weapon.getType() << std::endl;
}
