#include <iostream>

class test
{
private:
	std::string name;
public:
	int		age;
	test()
	{
		std::cout << "Default constructor\n";
	}
	test(std::string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	void	Display()
	{
		std::cout << this->name << std::endl;
		std::cout << this->age << std::endl;
	}
	~test()
	{
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

void	a()
{
	test t1("imad", 22);
	t1.Display();
}

void	b()
{
	test t1("hanma", 30);
	t1.Display();
}

int	main()
{

	test t1("imad", 22);

	t1 = t1;
	t1.Display();
	return (0);
}