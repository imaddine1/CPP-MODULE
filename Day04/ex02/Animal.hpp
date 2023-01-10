#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
	protected:
		std::string type;
	public:
	// OCCF
	Animal(void);
	Animal(const Animal& an);
	Animal& operator=(const Animal& an);
	virtual ~Animal(void);
	// REQUIRED FUNCTION
	virtual void	makeSound() const = 0; // pure virtual function
	std::string getType() const; 
};

#endif