#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& an)
{
    std::cout << "WrongAnimal Default copy constructor\n";
    this->type = an.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& an)
{
    this->type = an.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Default Destructor\n";
}
	// REQUIRED FUNCTION
void  WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal have no sound\n";
}

std::string    WrongAnimal::getType() const
{
    return (this->type);
}