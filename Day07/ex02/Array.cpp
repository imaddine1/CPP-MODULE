#include "Array.hpp"

//OCCF
template<typename T>
Array<T>::Array()
{
    std::cout << "Default constructor is called\n";
    arr = new T[0];
    _size = 0;
}

template<typename T>
Array<T>::Array(Array<T>& oldArr)
{
    std::cout << "copy constructor is called\n";
    arr = new T[0];
    *this = oldArr;
}

template<typename T>
Array<T>&  Array<T>::operator=(Array<T>& oldArr)
{
    std::cout << "copy assignment operator is called\n";
    delete[] arr;
    arr = new T[oldArr._size];
    this->_size = oldArr._size;
    for (int i = 0; i < oldArr._size; i++)
        arr[i] = oldArr.arr[i];
    return (*this);
}

template<typename T>
Array<T>::~Array()
{
    std::cout << "Destructor is called\n";
    delete[] arr;
}


// REQUIRED
template<typename T>
Array<T>::Array(unsigned int n)
{
    arr = new T[n]();
    _size = n;
    std::cout << "param constructor is called\n";
}

template<typename T>
int Array<T>::size()
{
    return (_size);
}

template<typename T>
T   Array<T>::operator[](int index)
{
    if (index >= _size || index < 0)
        throw std::out_of_range("The index is out of bound");
    return (arr[index]);
}

// OPTIONAL
template<typename T>
void Array<T>::setValue(T val)
{
    for (int i = 0; i < _size; i++)
        arr[i] = val;
}

template<typename T>
void Array<T>::printData()
{
    for (int i = 0; i < _size; i++)
        std::cout << arr[i] << " |";
    std::cout << "\n";
}

