#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Alex", 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "********* END OF MAIN ********\n";
    return (0);
}