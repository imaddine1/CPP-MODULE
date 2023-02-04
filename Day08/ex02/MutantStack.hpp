#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
#include <list>

template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T>
{

private:
  
public:
    // OCCF
    MutantStack();
    MutantStack(const MutantStack& mt);
    MutantStack& operator=(const MutantStack& mt);
    ~MutantStack();
    // REQUIRED TO WORK
    typedef typename Container::iterator iterator;

    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }

    //reverse iterators
    typedef typename Container::reverse_iterator reverse_iterator;
    
    reverse_iterator   rbegin()
    {
        return this->c.rbegin();
    }
    reverse_iterator    rend()
    {
        return this->c.rend();
    }

    // const iterators
    typedef typename Container::const_iterator const_iterator;

    const_iterator begin() const
    {
        return this->c.begin() ;
    }

    const_iterator  end() const
    {
        return this->c.end() ;
    }


    typedef typename Container::const_reverse_iterator const_reverse_iterator;

    const_reverse_iterator  rbegin() const
    {
        return this->c.rbegin();
    }

    const_reverse_iterator rend() const
    {
        return this->c.rend();
    }
    
};

// OCCF
template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(){
    std::cout << "Default constructor is called\n";
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& mt)
{
    std::cout << "copy constructor is called\n";
    *this = mt;
}

template <typename T, typename Container>
MutantStack<T, Container>&    MutantStack<T, Container>::operator=(const MutantStack<T, Container>& mt)
{
   std::cout << "assignment operator is called\n";
    this->c = mt.c;
   return (*this);
}

template <typename T, typename Container>
MutantStack<T, Container>:: ~MutantStack()
{
    std::cout << "Destructor is called\n";
}






#endif