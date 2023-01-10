#include "Brain.hpp"

void    Brain::set_ideas()
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "word_" + std::to_string(i + 1);
    }
}

void Brain::get_ideas()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << ideas[i] << std::endl;
    }
}



//OCCF
Brain::Brain(void)
{
    std::cout << "Brain Default constructor\n";
}

Brain::Brain(const Brain& an)
{
    std::cout << "Brain Default copy constructor\n";
    *this = an;
}

Brain& Brain::operator=(const Brain& an)
{
    std::cout << "Brain Default copy assignment\n";
    if (this == &an) //self assignment
        return (*this);
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = an.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Default Destructor\n";
}
