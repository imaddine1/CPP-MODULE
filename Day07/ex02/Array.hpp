#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template<typename T>
class Array
{
    private:
        T*  arr;
        unsigned int _size;
    public:
        //OCCF
        Array(void);
        Array(const Array& arr);
        Array&  operator=(const Array& arr);
        ~Array();
        // REQUIRED
        Array(unsigned int n);
        unsigned int size() const;
        // OPTIONAL
        void    setValue(T val);
        void    printData() const;
        T&   operator[](long long index);
        const T& operator[](long long index) const;
};

template<typename T>
Array<T>::Array()
{
    std::cout << "Default constructor is called\n";
    arr = new T[0];
    _size = 0;
}

template<typename T>
Array<T>::Array(const Array<T>& oldArr)
{
    std::cout << "copy constructor is called\n";
    arr = new T[0];
    *this = oldArr;
}

template<typename T>
Array<T>&  Array<T>::operator=(const Array<T>& oldArr)
{
    std::cout << "copy assignment operator is called\n";
    if (this == &oldArr)
        return *this;
    delete[] arr;
    arr = new T[oldArr._size];
    this->_size = oldArr._size;
    for (unsigned int i = 0; i < oldArr._size; i++)
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
unsigned int Array<T>::size() const
{
    return (_size);
}

template<typename T>
T&   Array<T>::operator[](long long index)
{
    if (index >= _size || index < 0)
        throw std::out_of_range("The index is out of bound");
    return (arr[index]);
}

template<typename T>
const T&   Array<T>::operator[](long long index) const
{
    if (index >= _size || index < 0)
        throw std::out_of_range("The index is out of bound");
    return (arr[index]);
}

// OPTIONAL
template<typename T>
void Array<T>::setValue(T val)
{
    for (unsigned int i = 0; i < _size; i++)
        arr[i] = val;
}

template<typename T>
void Array<T>::printData() const
{
    for (unsigned int i = 0; i < _size; i++)
        std::cout << arr[i] << " |";
    std::cout << "\n";
}


#endif