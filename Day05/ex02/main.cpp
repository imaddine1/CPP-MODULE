//#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "******** Shrubbery Class Test ****************\n";
    try
    {
        Bureaucrat b("Alex", 100);
        ShrubberyCreationForm Sh("home");
        b.signForm(Sh);
        b.executeForm(Sh);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "******** Robot Class Test ****************\n";
    try
    {
        Bureaucrat b("Trap", 40);
        RobotomyRequestForm R("New_Robot");
        b.signForm(R);
        b.executeForm(R);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    catch(int)
    {
        std::cerr << "ther grade of bereaucrat is not high enough to execute it\n";
    }
    std::cout << "******** PresidentialPardonForm Class Test ****************\n";
    try
    {
        Bureaucrat b("Eric", 5);
        PresidentialPardonForm P("Mike");
        b.signForm(P);
        b.executeForm(P);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    catch(int)
    {
        std::cerr << "ther grade of bereaucrat is not high enough to execute it\n";
    }


    std::cout << "********* END OF MAIN ********\n";
    return (0);
}