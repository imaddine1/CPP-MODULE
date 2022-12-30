#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default constructor\n";
    this->type = "Dog";
}

Dog::Dog(const Dog& an)
{
    std::cout << "Dog Default copy constructor\n";
    this->type = an.type;
}

Dog& Dog::operator=(const Dog& an)
{
    this->type = an.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Default Destructor\n";
}

void Dog::makeSound() const
{
    std::cout << "haw haw haw\n";
}