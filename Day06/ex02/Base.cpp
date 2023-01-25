#include "Base.hpp"

Base::~Base()
{

}

Base*   generate(void)
{
    srand(time(0));
    int r = rand() % 3;
    
    if (r == 0)
    {
        A*   a = new A();   
        return  (a);
    }    
    else if (r == 1)
    {
         B*   b = new B();
         return (b);
    }
    C*   c = new C();   
    return (c);
}

void    identify(Base* p)
{
    if (p)
    {
        A*  a = dynamic_cast<A*>(p);
        B*  b = dynamic_cast<B*>(p);
        C*  c = dynamic_cast<C*>(p);
        if (a)
        {
            std::cout << "THIS IS :: A\n";
            delete a;
            return ;
        }
        if (b)
        {
            std::cout << "THIS IS :: B\n";
            delete b;
            return ;
        }
        if (c)
        {
            std::cout << "THIS IS :: C\n";
            delete c;
            return ;
        }
        std::cout << "im crazy if no child is found unless gnerate() function is edited to fail\n";
    }
    else
        std::cout << "We couldn't deal with null base \n";
}

void    identify(Base& p)
{
    try
    {
       A&  a = dynamic_cast<A&>(p);
       (void)a;
       std::cout << "THIS IS :: A\n";
       delete &p;
       return ;
    }
    catch(const std::exception& e)
    {

    }

    try
    {
       B&  b = dynamic_cast<B&>(p);
       (void)b;
       std::cout << "THIS IS :: B\n";
       delete &p;
       return ;
    }
    catch(const std::exception& e)
    {

    }

    try
    {
      C&  c = dynamic_cast<C&>(p);
      (void)c;
      std::cout << "THIS IS :: C\n";
      delete &p;
      return ;
    }
    catch(const std::exception& e)
    {

    }
    std::cout << "this msg will display only in case if genrate() function is edited\n";
}