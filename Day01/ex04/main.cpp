#include <iostream>
#include <string.h>
#include <fstream>

std::string find_and_replace(std::string t, std::string s1, std::string s2)
{
	size_t index = t.find(s1);
	while (index != ULLONG_MAX)
	{
		t.erase(index, s1.length());
		t.insert(index, s2);
		index = t.find(s1, index + s2.length());
	}
	return (t);
}
int	main(int ac, char **av)
{
	std::fstream	in, out;
	std::string		s2;
	std::string		copy;

	if (ac != 4)
	{
		std::cout << "\033[0;31m three \033[0;33margument\033[0m \033[0;31mare requiered not more not less!!\033[0m\033[0m\n";
		return (0);
	}
	if (!av[2] || !av[3])
	{
		std::cout << "\033[0;31m you have empty arguments\033[0m\n";
	}
	in.open(av[1], std::ios::in);
	if (!in)
	{
		s2 = av[1];
		std::cout << "\x1b[30m" + s2 << "\x1b[0m" << "\033[0;31m not found !! \033[0m\n";
		return (0);
	}
	s2 = av[1];
	s2 += ".replace";
	out.open(s2, std::ios::out);
	if (!out)
	{
		std::cout << "\033[0;31m this is fails to open \033[0m\n";
		return (0);
	}
	std::string text;
	getline(in, text, '\0');
	out << find_and_replace(text, av[2], av[3]);
	in.close();
	out.close();
}