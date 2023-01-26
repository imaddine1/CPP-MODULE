#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template<typename T>
class Array
{
    private:
        T*  arr;
        int _size;
    public:
        //OCCF
        Array(void);
        Array(Array& arr);
        Array&  operator=(Array& arr);
        ~Array();
        // REQUIRED
        Array(unsigned int n);
        int size();
        T   operator[](unsigned int index);
        // OPTIONAL
        void    setValue(int val);
        void    printData();
};




#endif