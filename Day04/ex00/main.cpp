#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    // Add test for WrongAnima;
    const WrongAnimal* an = new WrongAnimal();
    const WrongAnimal* ca = new WrongCat();
    std::cout << an->getType() << std::endl;
    std::cout << ca->getType() << std::endl;
    an->makeSound();
    ca->makeSound();
    return 0;
}
