#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Default constructor\n";
    this->type = "Cat";
}

Cat::Cat(const Cat& an)
{
    std::cout << "Cat Default copy constructor\n";
    this->type = an.type;
}

Cat& Cat::operator=(const Cat& an)
{
    this->type = an.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor\n";
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow\n";
}