//#include "Bureaucrat.hpp"
#include "Intern.hpp"


void    test()
{
   try
   {
    Intern  someRandomeIntern;
    Form*   rrf;
    rrf = someRandomeIntern.makeForm("robotomy request", "Bender");
    std::cout << rrf->get_name() << std::endl;
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