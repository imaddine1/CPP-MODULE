#include "PresidentialPardonForm.hpp"

// OCCF
PresidentialPardonForm::PresidentialPardonForm()
{
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

}


void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > get_gradeTosign() || executor.getGrade() > get_gradeToExec())
          throw 1;
    std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}