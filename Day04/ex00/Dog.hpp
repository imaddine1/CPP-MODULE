#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
class Dog : public Animal
{
	public:
	//OCCF
	Dog();
	Dog(const Dog& d);
	Dog& operator=(const Dog& d);
	~Dog();
	// REQUIRED FUNCTION
	void	makeSound() const;
};


#endif 
