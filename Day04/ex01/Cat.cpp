#include "Cat.hpp"
// OCCF
Cat::Cat(void)
{
    std::cout << "Cat Default constructor\n";
    this->type = "Cat";
    this->Br = new Brain();
      this->Br->set_ideas();
}

Cat::Cat(const Cat& an)
{
    std::cout << "Cat Default copy constructor\n";
    this->Br = new Brain();
      this->Br->set_ideas();
    *this = an;
}

Cat& Cat::operator=(const Cat& an)
{
    std::cout << "Cat assignment operator\n";
     if (this == &an)
        return (*this);
	this->type = an.type;
	*(this->Br) = *an.Br;
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor\n";
    delete this->Br;
}
// REQUIRED FUNCTION
void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow\n";
}

// for test fucnion
void Cat::display() const
{
    this->Br->get_ideas();
}
