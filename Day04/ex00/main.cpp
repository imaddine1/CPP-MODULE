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
    // Add test for WrongAnimal;
    const WrongAnimal* an = new WrongAnimal();
    const WrongAnimal* ca = new WrongCat();
    std::cout << an->getType() << std::endl;
    std::cout << ca->getType() << std::endl;
    std::cout << "----------------\n";
    an->makeSound();
    ca->makeSound();
    std::cout << "----------------\n";
    delete meta;
    delete i;
    delete j;
    delete an;
    delete ca;
    return 0;
}
