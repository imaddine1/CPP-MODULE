#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Br1("Alex", 119);
        Form f("Business contract", 120 , 110);
        std::cout << "********* Display Data *********\n";
        std::cout << f;
        Br1.signForm(f);
        std::cout << "********* Display Data *********\n";
        std::cout << f;
        // this will throw exception Cause b doesn't have the required grade
        Bureaucrat Br2("Joe", 122);
        Br2.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "********* END OF MAIN ********\n";
    return (0);
}