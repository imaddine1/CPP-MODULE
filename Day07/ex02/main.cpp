#include "Array.hpp"
#include "Array.cpp"



void    test()
{
    std::cout << "************ Valid TEST ***************\n";
    try
    {
        Array<int> a(5);
        a.setValue(15);
        Array<int> b;
        b = a;
        std::cout << "+++++++++ The DATA IS EQUAL ++++++++++\n";
        a.printData();
        b.printData();
        std::cout << "++++++++++++++++++++++++++++++++++++++++\n";
        std::cout << "+++++++++++++ CHANGE THE DATA OF A +++++++++++++++\n";
        a.setValue(12);
        a.printData();
        b.printData();
        std::cout << "++++++++++++++++++++++++++++++++++++++++\n";

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    test();



    system("leaks Array");
    return (0);
}