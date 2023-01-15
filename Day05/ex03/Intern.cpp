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

	std::string arr[3];
	arr[0] = "robotomy request";
	arr[1] = "shrubbery creation";
	arr[2] = "presidential pardon";
	int i;
	for (i = 0; i < 3; i++)
	{
		if (nameForm == arr[i])
			break ;
	}
	switch (i)
	{
		case 0:
			return (new RobotomyRequestForm(target));
		case 1:
			return (new ShrubberyCreationForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			throw Intern::invalidName();
	}
}
