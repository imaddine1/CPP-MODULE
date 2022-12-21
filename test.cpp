#include <iostream>

class test
{
private:
	int a;
public:
	test(int a=0)
	{
		std::cout << "initialized constructor called\n";
		this->a = a;
	}


	friend test operator +(test t1, test t2) 
	{
		test tt(t1.a + t2.a);
		return (tt);
	}
	friend std::ostream& operator<<(std::ostream& out, test& obj)
	{
		out << obj.a;
		return out;
	}
	int	gettest()  const
	{
		return (a);
	}
};

void s(test t)
{

}



int	main()
{
	const test t;

	
	std::cout << t.gettest() << std::endl;
	return (0);
}