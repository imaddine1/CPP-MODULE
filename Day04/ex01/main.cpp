#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


void    for_leaks()
{
     Animal* arr[10];
    int     i;

    i = 0;
    while (i < 10)
    {
        if (i % 2 == 0)
            arr[i] = new Cat();
        else
            arr[i] = new Dog();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        delete arr[i];
        i++;
    }
}
int main()
{
    for_leaks();
    std::cout << "--------------------------\n";
    // adding more test to display that im using deep copy
    Cat c1;
    std::cout << "************************\n";
    c1.display();
    std::cout << "************************\n";
    // in this section w'll be called copy constructor and assignment operator1
    Cat c2 = c1;
    c2.display();

    //system ("leaks deepCopy");
    return 0;
}
