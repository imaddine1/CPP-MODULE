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
	~Animal(void);
	// REQUIRED FUNCTION
	virtual void	makeSound() const;
	std::string getType() const; 
};

#endif