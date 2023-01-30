#include "Span.hpp"

// ORTHODOX CANONICAL CLASS FORM
Span::Span()
{
    std::cout << "constructor is called\n";
    _size = 0;
    _init = 0;
}

Span::Span(const Span& sp)
{
    std::cout << "copy constructor is called\n";
    *this = sp;
}

Span& Span::operator=(const Span& sp)
{
    std::cout << "copy assignment is called\n";
    _size = sp._size;
    this->vec = sp.vec;
    return (*this);
}

Span::~Span()
{
    std::cout << "Destructor is called\n";
}

// REQUIRED

Span::Span(unsigned int n)
{
    std::cout << "param constructor is called\n";
    _size = n;
    _init = 0;
    vec.reserve(n);
}

void    Span::addNumber(int number)
{

    if (_init >= _size)
        throw "+++ You exceed the size of the array +++";
    vec.push_back(number);
    _init++;
}

long long     Span::shortestSpan() const
{
    if (_init <= 1)
        throw "++ no span can be found ++";
    long long min = LLONG_MAX;
    unsigned int i = 0;
    int sub;
    while (i < _size - 1)
    {
        sub = vec[i] - vec[i + 1];
        if (sub < 0)
            sub *= (-1);
        if (sub < min)
            min = sub;
        i++;
    }
    return (min);
}

long long Span::longestSpan() const
{
    if (_init <= 1)
        throw "++ no span can be found ++";
    long long max = LLONG_MIN;
    unsigned int i = 0;
    int sub;
    while (i < _size - 1)
    {
        sub = vec[i] - vec[i + 1];
        if (sub < 0)
            sub *= (-1);
        if (sub > max)
            max = sub;
        i++;
    }
    return (max);
}

// FOR OPTIONAL TEST

void    Span::fill(int* first, int* last)
{
    while (first != last)
    {
        this->addNumber(*first);
        first++;
    }
}

