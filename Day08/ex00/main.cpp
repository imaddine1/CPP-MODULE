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
    std::cout << "******* TEST USING LIST *************\n";
    try 
    {
        std::list<int> lst;
        lst.push_back(4);
        lst.push_back(5);
        lst.push_back(6);
        lst.push_back(11);

        easyfind(lst, 6);
    }
    catch(int)
    {
        std::cout << "The number is not found\n";
    }
    std::cout << "******* TEST USING SET *************\n";
    try 
    {
        std::set<int> s;

        s.insert(4);
        s.insert(5);
        s.insert(6);
        s.insert(11);
        s.insert(12);

        easyfind(s, 5);
    }
    catch(int)
    {
        std::cout << "The number is not found\n";
    }

    return (0);
}