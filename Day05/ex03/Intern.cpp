#include "Intern.hpp"

// ****************** create orthodox canonical form ****************

Intern::Intern()
{
    std::cout << "Intern Default constructor\n";
}

Intern::Intern(const Intern& B)
{
    (void)B;
    std::cout << "Intern Copy constructor\n";
   // *this = B;
}

const Intern& Intern::operator=(const Intern& B)
{
    (void)B;
    std::cout << "Intern assignment operator\n";
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern Destructor\n";
}

// Required Function

Form*    Intern::makeForm(std::string nameForm, std::string target)
{
    (void)nameForm;
    (void)target;
    return (NULL);
}
