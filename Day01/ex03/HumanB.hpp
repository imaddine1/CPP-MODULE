#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon*		weapon;
public:
	HumanB(std::string name);
	void	setWeapon(Weapon& w);
	void	attack(void);
};




#endif
