#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
typedef struct Serialize
{
    int     a;
    float   b;
    double  c;
}   Data;


uintptr_t   serialize(Data* ptr);
Data*       deserialize(uintptr_t raw);

#endif