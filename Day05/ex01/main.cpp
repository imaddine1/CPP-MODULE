#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Alex", 1);
        b.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    //Bureaucrat b("joe", 160); //this is w'll be result uncaught handler
    /*
        this part it will be work correctly if grade is valid else w'll be aborted
    */
    std::cout << "++++++++ test without exception ++++++\n";
    Bureaucrat  B1;
    Bureaucrat  B2 = B1;
    B2.decrement();
    B2.increment();
    B2.decrement();
    std::cout << B2 << '\n';
    std::cout << "++++++++ +++++++++++++++++ ++++++\n";
    std::cout << "********* END OF MAIN ********\n";
    return (0);
}