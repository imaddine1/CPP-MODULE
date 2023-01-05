#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat Default constructor\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& an)
{
    std::cout << "WrongCat Default copy constructor\n";
    this->type = an.type;
}

WrongCat& WrongCat::operator=(const WrongCat& an)
{
    this->type = an.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Default Destructor\n";
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow Meow\n";
}