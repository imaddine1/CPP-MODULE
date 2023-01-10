#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* Br;
	public:
	//OCCF
	Cat();
	Cat(const Cat& d);
	Cat& operator=(const Cat& d);
	virtual ~Cat();
	// REQUIRED FUNCTION
	void	makeSound() const;
	// for test
	void display() const;
};


#endif 
