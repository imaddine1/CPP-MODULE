#include "Harl.hpp"

int	main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Error argument required is one!!\n";
		return (0);
	}
	Harl	h;

	h.complain(av[1]);
}