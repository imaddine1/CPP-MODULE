#include "MutantStack.hpp"


int main()
{

    std::cout << "************ TEST FROM SUBJECT ***********\n";   
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "************ TEST WITH LIST ***********\n";
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    //[...]
    mlist.push_back(0);
    std::list<int>::iterator it1 = mlist.begin();
    std::list<int>::iterator ite1 = mlist.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
    std::cout << *it1 << std::endl;
    ++it1;
    }

   std::cout << "************ TEST WITH REVERSE ***********\n";
    MutantStack<int> mstack2;
    mstack2.push(5);
    mstack2.push(17);
    mstack2.push(3);
    mstack2.push(5);
    mstack2.push(737);
    mstack2.push(0);
    MutantStack<int>::reverse_iterator it2 = mstack2.rbegin();
    MutantStack<int>::reverse_iterator ite2 = mstack2.rend();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
    std::cout << *it2 << std::endl;
    ++it2;
    }

    return 0;
}

