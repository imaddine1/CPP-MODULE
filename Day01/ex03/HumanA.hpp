#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"
class HumanA
{
private:
	std::string 		name;
	Weapon 				*_weapon;
public:
	HumanA(std::string name, Weapon& w);
	void	attack();
};

#endif