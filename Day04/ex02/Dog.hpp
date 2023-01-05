#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain*	Br;
	public:
	//OCCF
	Dog();
	Dog(const Dog& d);
	Dog& operator=(const Dog& d);
	virtual ~Dog();
	// REQUIRED FUNCTION
	void	makeSound() const;
};


#endif 
