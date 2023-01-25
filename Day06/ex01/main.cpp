#include "Serialize.hpp"

int main()
{
	Data*	p = new Data();
	p->a = 2023;
	p->b = 13.37;
	p->c = 42.42;

	uintptr_t up = serialize(p);
	Data*	  np = deserialize(up);

	std::cout << "******** ADDRESSES ***********\n";
	std::cout << p << std::endl;
	//std::cout << (int*)p << std::endl;
	std::cout << np << std::endl;
	std::cout << "******** DATA ***********\n";
	std::cout << np->a << std::endl;
	std::cout << np->b << std::endl;
	std::cout << np->c << std::endl;
	delete p;
}
