#include "iter.hpp"

int main()
{
    std::cout << "*********** INTEGER *************\n";
    int arrI[] = {7, 9, 8 , 6, 3};
    int size = sizeof(arrI) / sizeof(arrI[0]);
    iter(arrI, size, print);
    std::cout << "*********** DOUBLE *************\n";
    double arrD[] = {7.15, 8.12, 9.26 , 6.47, 3.51};
    size = sizeof(arrD) / sizeof(arrD[0]);
    iter(arrD, size, print);
     std::cout << "*********** CHARACTERS *************\n";
    char arrC[] = {'a', 'b', 'E' , 'F'};
    size = sizeof(arrC) / sizeof(arrC[0]);
    iter(arrC, size, print);
    std::cout << "*********** STRINGS *************\n";
    char arrS[][10] = {"be fine", "be good", "be happy" , "be strong"};
    size = sizeof(arrS) / sizeof(arrS[0]);
    iter(arrS, size, print);
    return (0);
}