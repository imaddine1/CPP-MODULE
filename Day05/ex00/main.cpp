#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Alex", 2);
        b.increment();
        b.decrement();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    //Bureaucrat b("joe", 160); //this is w'll be result uncaught handler
    /*
        this part it will be work correctly if grade is valid else w'll be aborted
    */
    std::cout << "********* END OF MAIN ********\n";
    return (0);
}