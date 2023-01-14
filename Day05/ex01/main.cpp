#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Alex", 119);
        Form f("Business contract", 120 , 110);
        b.signForm(f);
        b = Bureaucrat("Joe", 122);
        // this will throw exception Cause b doesn't have the required grade
        b.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "********* END OF MAIN ********\n";
    return (0);
}