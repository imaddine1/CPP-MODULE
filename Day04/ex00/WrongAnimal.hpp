#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
	// OCCF
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& an);
	WrongAnimal& operator=(const WrongAnimal& an);
	~WrongAnimal(void);
	// REQUIRED FUNCTION
	void	makeSound() const;
	std::string getType() const; 
};

#endif