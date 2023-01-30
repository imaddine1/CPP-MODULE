#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <array>
#include <forward_list>
#include <list>
#include <set>
#include <map>

template<typename T>
void    easyfind(const T& Cont, typename T::value_type nb)
{
    typename T::const_iterator it;

    it  = std::find(Cont.begin(), Cont.end(), nb);
    if (it != Cont.end())
        std::cout << "The number is: " << nb << std::endl;
    else
        throw 1;
}

#endif