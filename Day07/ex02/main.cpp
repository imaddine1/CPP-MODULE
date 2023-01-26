#include "Array.hpp"
#include "Array.cpp"



void    test_for_prove()
{
    std::cout << "************ Valid TEST ***************\n";
    try
    {
        Array<int> a(5);
        a.setValue(15);
        Array<int> b = a;
        //b = a;
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

    std::cout << "************ inValid TEST ***************\n";
    try
    {
        Array<int> a(4);

        std::cout << a[4] << std::endl;;

    }
    catch(const std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
    }
    std::cout << "************ Double TEST ***************\n";
    try
    {
        Array<double> a(4);

        a.setValue(14.25);
        a.printData();
        std::cout << a.size() << std::endl;
        std::cout << a[1] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
    }
}

int main()
{
    test_for_prove();

    //system("leaks Array");
    return (0);
}