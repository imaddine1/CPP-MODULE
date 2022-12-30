#include <iostream>

class test
{
private:
	std::string name;
	int*		m_age;
public:
	test()
	{
		std::cout << "Default constructor\n";
	}
	test(std::string name, int age)
	{
		this->m_age = new int;
		std::cout << "parametrized constructor\n";
		this->name = name;
		*(this->m_age) = age;
	}
	//copy constructor 
	test(const test& t)
	{
		this->name = t.name;
		this->m_age = new int;
		*(this->m_age) = *t.m_age;
	}
	void	Display()
	{
		std::cout << (this->name) << std::endl;
		std::cout << *(this->m_age) << std::endl;
	}
	~test()
	{
		delete m_age;
		std::cout << "Destructor is called\n";
	}
};

/*
class Base
{
private:
virtual std::string getName() const { return "Base\n"; }
protected:
    int m_value ;

public:
	Base()
	{
		std::cout << "Defaut constructor of base class is called\n";
	}
    Base(int value)
        : m_value( value )
    {
    }

   
    int getValue() const { return m_value; }
};


class Derived: public Base
{
	int a;
public:
	Derived() {std::cout << "Defautlt Constructor of Derived is called\n";}
    Derived(int value)
    {
		std::cout << "param constructor of Derived is called\n";
		this->m_value = value;
    }

    std::string getName()  const { return "Derived\n"; }
    int getValueDoubled() const { return m_value * 2; }
	virtual std::string check()  {return ("this is Derived\n");}
};


class Derived_sec: public Derived
{
	int a;
public:
    Derived_sec(int value)
    {
		std::cout << "param constructor of Derived_sec is called\n";
		m_value = value;
    }

    std::string getName() const { return "Derived_sec\n"; }
    int getValueDoubled() const { return m_value * 2; }
	std::string check()  {return "this is Derived_sec\n";}
};
*/


int	main()
{

	test t1("imad", 22);
	t1.Display();
	std::cout << "----------------------"<< std::endl;
	test t2 = t1;
	t2.Display();
	
	std::cout << "THIS IS END\n";
	return (0);
}