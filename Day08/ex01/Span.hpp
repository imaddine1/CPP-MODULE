#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <iterator>
#include <ctime>
#include <list>

class Span
{
private:
   unsigned int _size;
   unsigned int _init;
   std::vector<int> vec;
public:
    // OCCF
    Span();
    Span(const Span& sp);
    Span& operator=(const Span& sp);
    ~Span();
    // REQUIRED
    /* parametherized constructor */
    Span(unsigned int n);
    void    addNumber(int number);
    long long     shortestSpan() const;
    long long     longestSpan() const;
    // FOR OPTIONAL TEST
    void    fill(int* first, int* last);

};




#endif