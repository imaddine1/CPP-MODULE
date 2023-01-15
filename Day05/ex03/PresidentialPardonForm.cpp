#include "PresidentialPardonForm.hpp"

// OCCF
PresidentialPardonForm::PresidentialPardonForm():Form("Presidential Pardon", 25, 5)
{
    target = "Default";
    std::cout << "Presidential Default constructor\n";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& Sh)
{
    std::cout << "Presidential copy constructor\n";
    *this = Sh;
}
const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& Sh)
{
    std::cout << "Presidential assignment operator\n";
    target = Sh.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Default Destructor\n";
}
// param constructor that take target
PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("Presidential Pardon", 25, 5)
{
    std::cout << "Presidential param constructor\n";
    this->target = target;
}

const char* PresidentialPardonForm::invalidPardon::what() const throw()
{
    return ("ther grade of bereaucrat is not high enough to execute it\n");
}

void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if ( get_signed() == false || executor.getGrade() > get_gradeToExec())
          throw invalidPardon();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}