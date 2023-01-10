#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
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
    system ("leaks deepCopy");
    return 0;
}
