#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default constructor\n";
    this->type = "Dog";
    this->Br = new Brain();
    this->Br->set_ideas();
}

Dog::Dog(const Dog& an)
{
    std::cout << "Dog Default copy constructor\n";
    this->Br = new Brain();
      this->Br->set_ideas();
    *this = an;
}

Dog& Dog::operator=(const Dog& an)
{

    std::cout << "Dog assignment operator\n";
    if (this == &an)
        return (*this);
	this->type = an.type;
	*(this->Br) = *an.Br;
	return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Default Destructor\n";
    delete this->Br;
}

void Dog::makeSound() const
{
    std::cout << "haw haw haw\n";
}