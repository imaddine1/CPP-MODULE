#include "RobotomyRequestForm.hpp"

// OCCF
RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Robot Default constructor\n";
    name = "Defuatl Robot";
    sign = 1;
    exec = 1;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Sh)
{
    std::cout << "Robot copy constructor\n";
    *this = Sh;
}
const RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& Sh)
{
    std::cout << "Robot assignment operator\n";
    sign = Sh.sign;
    exec = Sh.exec;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robot Default Destructor\n";
}
// param constructor that take target
RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    std::cout << "Robot param constructor\n";
    name = target;
    sign = 72;
    exec = 45;
}
//getter
std::string RobotomyRequestForm::get_name() const
{
    return (name);
}

void    RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > exec || executor.getGrade() > sign)
          throw 1;
    srand(time(0));
    int i = rand() % 2;
    if (i)
        std::cout << "robotomy failed\n";
    else
        std::cout << name << " has been robotomized\n";
}