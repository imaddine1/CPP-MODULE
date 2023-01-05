#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Default constructor\n";
    this->type = "Cat";
    this->Br = new Brain();
}

Cat::Cat(const Cat& an)
{
    std::cout << "Cat Default copy constructor\n";
    *this = an;
}

Cat& Cat::operator=(const Cat& an)
{
    std::cout << "Cat assignment operator\n";
     if (this == &an)
        return (*this);
    delete this->Br;
	this->Br = new Brain();
	this->type = an.type;
	*(this->Br) = *an.Br;
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor\n";
    delete this->Br;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow\n";
}