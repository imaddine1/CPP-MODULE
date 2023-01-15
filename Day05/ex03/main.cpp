//#include "Bureaucrat.hpp"
#include "Intern.hpp"


void    test()
{
   try
   {
    Bureaucrat b("Alex", 4);
    Intern  someRandomeIntern;
    Form*   rrf;
    rrf = someRandomeIntern.makeForm("robotomy request", "Bender");
    b.signForm(*rrf);
    b.executeForm(*rrf);
    std::cout << *rrf;
    delete rrf;
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what();
   }
}

int main()
{
    test();
   //system("leaks intern");
    std::cout << "********* END OF MAIN ********\n";
    return (0);
}