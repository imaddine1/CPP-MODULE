#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

// it's necessary to use dummy constructor for initializing allocated arrays of object
class Zombie
{
private:
	std::string	name;
public:
	void	announce(void);
	Zombie(std::string name);
	Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

#endif