#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	//OCCF
	WrongCat();
	WrongCat(const WrongCat& d);
	WrongCat& operator=(const WrongCat& d);
	~WrongCat();
	// REQUIRED FUNCTION
	void	makeSound() const;
};


#endif 
