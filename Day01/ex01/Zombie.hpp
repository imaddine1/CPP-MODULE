#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
};



#endif