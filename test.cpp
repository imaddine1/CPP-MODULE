#include <iostream>
#include <iomanip>
#include <cmath>

// class test
// {
// private:
// 	std::string name;
// 	int*		m_age;
// public:
// 	test()
// 	{
// 		std::cout << "Default constructor\n";
// 	}
// 	test(std::string name, int age)
// 	{
// 		std::cout << "parametrized constructor\n";
// 		this->m_age = new int;
// 		this->name = name;
// 		*(this->m_age) = age;
// 	}
// 	//copy constructor 
// 	test(const test& t)
// 	{
// 		std::cout << "copy constructor\n";
// 		/*this->name = t.name;
// 		this->m_age = new int;
// 		*(this->m_age) = 3;*/
// 		this->m_age = t.m_age;
// 		this->name = t.name;
// 	}

// 	test&	operator=(const test& t)
// 	{
// 		//std::cout << *t.m_age << std::endl;
// 		if (this == &t)
// 			return (*this);
// 		std::cout << "this is copy assignment\n";
// 		this->name = t.name;
// 		this->m_age = new int;
// 		*(this->m_age) = *(t.m_age);
// 		return (*this);
// 	}
// 	void	Display()
// 	{
// 		std::cout << (this->name) << std::endl;
// 		std::cout << *(this->m_age) << std::endl;
// 	}
// 	~test()
// 	{
// 		//delete m_age;
// 		std::cout << "Destructor is called\n";
// 	}
// 	friend std::ostream& operator<<(std::ostream& out , const test& t)
// 	{
// 		out << *t.m_age ;
// 		return (out);
// 	}
// };


class Base
{
private:
protected:
    int m_value ;

public:
	virtual std::string getName() const { return "Base\n"; }
	Base()
	{
		m_value = -1;
		std::cout << "Defaut constructor of base class is called\n";
	}
    Base(int value)
        : m_value( value )
    {
		std::cout << "Base parametherized constructor\n";
    }
	void	special() {std::cout << "this is special function base class\n";}
    int 	getValue() const { return m_value; }
	virtual ~Base() {std::cout << "Destructor of Base\n";}
};


class Derived: public Base
{
	int a;
public:
	Derived()
	 {a = 0;std::cout << "Defautlt Constructor of Derived is called\n";}
    Derived(int value)
    {
		std::cout << this->m_value << std::endl;
		std::cout << "param constructor of Derived is called\n";
		this->m_value = value;
    }

    std::string getName()  const  { return "Derived\n"; }
    int getValueDoubled() const { return m_value * 2; }
	virtual std::string check()  {return ("this is Derived\n");}
	 ~Derived() {std::cout << "Derived Destructor\n";}
};

/*
class Derived_sec: public Derived
{
	int a;
public:
	Derived_sec() {a = 0;std::cout << "Derived_sec constructor\n";}
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
	return (0);
}