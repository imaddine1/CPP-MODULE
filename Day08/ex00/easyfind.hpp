#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <array>
#include <forward_list>
#include <list>
#include <set>

template<typename T, typename U>
void    easyfind(const T& Cont, U nb)
{
    typename T::const_iterator it;
    for (it = Cont.begin(); it != Cont.end(); it++)
    {
        if (*it == nb)
        {
            std::cout << "The number is " << nb << std::endl;
            return ;
        }
    }
    throw 1;
}

#endif