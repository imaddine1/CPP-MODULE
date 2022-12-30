#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
	protected:
		std::string type;
	public:
	Animal(void);
	Animal(const Animal& an);
	const Animal& operator=(const Animal& an);
	~Animal(void);
};

#endif