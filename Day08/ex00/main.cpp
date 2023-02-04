#include "easyfind.hpp"


int main()
{

    std::cout << "******* TEST USING VECTOR *************\n";
    try 
    {
        std::vector<int> vec ;
        vec.push_back(4);
        vec.push_back(5);
        vec.push_back(6);
        vec.push_back(12);

        easyfind(vec, 4);
    }
    catch(int)
    {
        std::cout << "The number is not found\n";
    }

    std::cout << "******* TEST USING DEQUE *************\n";
    try 
    {
        std::deque<int> deq;
        deq.push_back(4);
        deq.push_back(5);
        deq.push_back(6);
        deq.push_back(12);

        easyfind(deq, 12);
    }
    catch(int)
    {
        std::cout << "The number is not found\n";
    }
    std::cout << "******* TEST USING ARRAY *************\n";
    try 
    {
        std::array<int, 4> arr;
        arr.fill(4);
        arr.fill(5);
        arr.fill(6);
        arr.fill(11);

        easyfind(arr, 11);
    }
    catch(int)
    {
        std::cout << "The number is not found\n";
    }



    return (0);
}