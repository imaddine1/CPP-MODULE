#include <iostream>
#include <iomanip>
#include <cmath>
#include <bitset>
#include <exception>
#include <stdexcept>


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


// class Base
// {

// private:
// protected:
//     int m_value ;

// public:
// 	virtual std::string getName() const { return "Base\n"; }
// 	Base()
// 	{
// 		m_value = -1;
// 		std::cout << "Defaut constructor of base class is called\n";
// 	}
//     Base(int value)
//         : m_value( value )
//     {
// 		std::cout << "Base parametherized constructor\n";
//     }
// 	operator std::string()
//     {
//         std::cout << "Conversion Operator" << std::endl;
//         return "this is me";
//     }
// 	void	special() {std::cout << "this is special function base class\n";}
//     int 	getValue() const { return m_value; }
// 	//virtual ~Base() {std::cout << "Destructor of Base\n";}
// };


// class Derived: public Base
// {
// 		int a;
// public:
// 	Derived()
// 	 {a = 0;std::cout << "Defautlt Constructor of Derived is called\n";}
//     Derived(int value)
//     {
// 		std::cout << this->m_value << std::endl;
// 		std::cout << "param constructor of Derived is called\n";
// 		this->m_value = value;
//     }

//     // std::string getName()  const  { return "Derived\n"; }
//     int getValueDoubled() const { return m_value * 2; }
// 	//virtual std::string check()  {return ("this is Derived\n");}
// 	 ~Derived() {std::cout << "Derived Destructor\n";}
// };


// class Derived_sec: public Base
// {
// 	int a;
// public:
// 	Derived_sec() {a = 0;std::cout << "Derived_sec constructor\n";}
//     Derived_sec(int value)
//     {
// 		std::cout << "param constructor of Derived_sec is called\n";
// 		m_value = value;
//     }

//     std::string getName() const { return "Derived_sec\n"; }
//     int getValueDoubled() const { return m_value * 2; }
// 	std::string check()  {return "this is Derived_sec\n";}
// };

// typedef struct test
// {
// 	int a;
// 	int b;
// } t;

// using namespace std;




// class parent{
// 	int	a;
// 	int	b;
// 	public:
// 	virtual void func() {std::cout << "im virtual in base \n";}
// };

// class child: public parent{
// 	int f;
// 	public:
// 	void func() {std::cout << "im virtual in child\n";}
// };

// class anotherChild : public parent {
// 	int ac;
// 	public :
// 	void func() {
// 		std::cout << "im virtual in another child\n";
// 	}
// };


				// ************** TEST FOR TEMPLATES *************

// template <typename T>
// void	print(T x)
// {
// 	std::cout << x << std::endl;
// }

// template <typename T>
// void	Iter(T* arr, int length, void (*print)(T))
// {
// 	for (int i = 0; i < length; i++)
// 	{
// 		print(arr[i]);
// 	}
// }

// int	main()
// {
// 	int arrInt[] = {4, 5, 7, 8};

// 	char arrChar[] = {'a', 'b', 'c', 'd'};

// 	char arrStr[][100] = {
// 						"im here",
// 						"so cold",
// 						"nice clothes for winter",
// 						"be nice or not it's belong to you"
// 						};

// 	Iter (arrInt, 4, print);
// 	Iter (arrChar, 4, print);
// 	Iter (arrStr, 4, print);
// 	return (0);
// }

template <typename T>
class Array{
	private:
	T* a;
	int _size;
	public:
	Array(){
		std::cout << "Default constructor of Array\n";
		a = new T();
	}
	Array(unsigned int n)
	{
		a = new T[n];
		_size = n;
		for (int i = 0; i < n; i++)
			a[i] = 10;
		std::cout << "param constructor\n";
	}
	Array(Array& arr)
	{
		std::cout << "copy constructor of array\n";
		*this = arr;
	}
	Array& operator=(Array& arr)
	{
		std::cout << "assignment operator\n";
		this->a = new int[4];
		for (int i = 0; i < 4; i++)
		{
			this->a[i] = arr.a[i];
		}
		return (*this);
	}

	int size()
	{
		return (_size);
	}

	int elementByindex(int index)
	{
		if (index >= this->_size)
			throw std::out_of_range("out of bound");
		return (a[index]);
	}
	~Array() {
		std::cout << "default Destructors\n";
		delete[] a;
	}
};



int	main()
{

	try
	{
		Array<int>	a(4);
		std::cout << a.size() << std::endl;
		Array<int>	b = a;

		b.elementByindex(5);
	}
	catch (std::exception& e)
	{
		std::cerr << "error: "<< e.what() << std::endl;
	}


	//system ("leaks a.out");
	return (0);
}