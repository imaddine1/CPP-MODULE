#include "Span.hpp"

int main()
{
    std::cout << "******* THE REQUIRED TEST *********\n";
    try
    {
         Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        const Span sp2 = sp;
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const char* msg)
    {
        std::cerr << msg << std::endl;
    }
    std::cout << "******* THE OPTIONAL TEST *********\n";
    try
    {
        Span sp = Span(5);
        int ar[] = {1 , 2 , 3 , 4 , 5};
        sp.fill(ar, ar + (sizeof(ar) / sizeof(ar[0])));

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char* msg)
    {
        std::cerr << msg << std::endl;
    }


    return (0);
}