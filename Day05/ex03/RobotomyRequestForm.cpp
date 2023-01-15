#include "RobotomyRequestForm.hpp"

// OCCF
RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request", 72, 45)
{
    target = "Default";
    std::cout << "Robot Default constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Sh)
{
    std::cout << "Robot copy constructor\n";
    *this = Sh;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& Sh)
{
    std::cout << "Robot assignment operator\n";
    target = Sh.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robot Default Destructor\n";
}
// param constructor that take target
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("Robotomy Request", 72, 45)
{
    this->target = target;
    std::cout << "Robot param constructor\n";
}

// Exception
const char* RobotomyRequestForm::invalidRobot::what() const throw()
{
    return ("ther grade of bereaucrat is not high enough to execute it\n");
}

void    RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if ( get_signed() == false || executor.getGrade() > get_gradeToExec())
          throw invalidRobot();
    srand(time(0));
    int i = rand() % 2;
    if (i)
        std::cout << "robotomy failed\n";
    else
        std::cout << target << " has been robotomized\n";
}