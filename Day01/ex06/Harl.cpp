#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string arr[4];
	int i;

	arr[0] = "DEBUG";
	arr[1] = "INFO";
	arr[2] = "WARNING";
	arr[3] = "ERROR";

	for (i = 0; i < 4; i++)
		if (arr[i] == level)
			break ;
	switch (i)
	{
	case 0:
		std::cout << "[ DEBUG ]\n";
		debug();
	case 1:
		std::cout << "[ INFO ]\n";
		info();
	case 2:
		std::cout << "[ WARNNING ]\n";
		warning();
	case 3:
		std::cout << "[ ERROR ]\n";
		error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}
}