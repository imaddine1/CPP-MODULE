#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	//OCCF
	Cat();
	Cat(const Cat& d);
	Cat& operator=(const Cat& d);
	~Cat();
	// REQUIRED FUNCTION
	void	makeSound() const;
};


#endif 
