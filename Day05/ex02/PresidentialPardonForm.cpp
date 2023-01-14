#include "PresidentialPardonForm.hpp"

// OCCF
PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Presidential Default constructor\n";
    name = "Defuatl Presidential";
    sign = 1;
    exec = 1;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& Sh)
{
    std::cout << "Presidential copy constructor\n";
    *this = Sh;
}
const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& Sh)
{
    std::cout << "Presidential assignment operator\n";
    sign = Sh.sign;
    exec = Sh.exec;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Default Destructor\n";
}
// param constructor that take target
PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    std::cout << "Presidential param constructor\n";
    name = target;
    sign = 25;
    exec = 5;
}
//getter
std::string PresidentialPardonForm::get_name() const
{
    return (name);
}

void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > exec || executor.getGrade() > sign)
          throw 1;
    std::cout << name << " has been pardoned by Zaphod Beeblebrox\n";
}