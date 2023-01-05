#include "Animal.hpp"

Animal::Animal(void)
{
    type = "Animal";
    std::cout << "Animal Default constructor\n";
}

Animal::Animal(const Animal& an)
{
    std::cout << "Animal Default copy constructor\n";
    this->type = an.type;
}

Animal& Animal::operator=(const Animal& an)
{
    this->type = an.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Default Destructor\n";
}
	// REQUIRED FUNCTION
void  Animal::makeSound() const
{
    std::cout << "Animal have no sound\n";
}

std::string    Animal::getType() const
{
    return (this->type);
}