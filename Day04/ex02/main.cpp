#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{
    // if you wanna use abstract class you can use ref/pointer to create
    
    // exmp Ref
    Dog d;
    Animal &a = d;
    std::cout << a.getType() << std::endl;
    //exmp Ptr
    Cat c;
    Animal  *an = &c;
    std::cout << an->getType() << std::endl;

    return (0);
}
