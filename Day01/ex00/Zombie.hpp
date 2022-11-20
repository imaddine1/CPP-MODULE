#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <iostream>
// idk why there is no leak in randoChump even i don't use systel ("leaks zombie");
class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	void	announce (void);
	Zombie(void);
	~Zombie(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif