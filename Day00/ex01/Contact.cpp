#include <string.h>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact()
{
	index_m = -10;
	fn_m = "NULL";
	ln_m = "NULL";
	nk_m = "NULL";
	nb_m = "NULL";
}

void	Contact::set_info(std::string fn, std::string ln, std::string nk, std::string nb, int index,
	std::string ds)
{
		index_m = index;
		fn_m = fn;
		ln_m = ln;
		nk_m = nk;
		nb_m = nb;
		ds_m = ds;
}

int  Contact::get_index()
{
	return index_m;
}

void	Contact::get_display()
{
	if (std::to_string(index_m).length() > 10)
		std::cout << std::setw(10) << std::right << std::to_string(index_m).substr(0, 9) << '.' << '|';
	else
		std::cout << std::setw(10) << std::right << index_m << '|';
	if (fn_m.length() > 10)
		std::cout << std::setw(10) << std::right << fn_m.substr(0, 9) +'.' << '|';
	else
		std::cout << std::setw(10) << std::right << fn_m << '|';
	if (ln_m.length() > 10)
		std::cout << std::setw(10) << std::right << ln_m.substr(0, 9) + '.' << '|';
	else
		std::cout << std::setw(10) << std::right << ln_m << '|';
	if (nk_m.length() > 10)
		std::cout << std::setw(10) << std::right << nk_m.substr(0, 9) + '.';
	else
		std::cout << std::setw(10) << std::right << nk_m;
}

void	Contact::get_by_index()
{
	std::cout << "\033[0;32m" << index_m << "\033[0m"<< "\n";
	std::cout << "\033[0;32m" << fn_m << "\033[0m" << "\n";
	std::cout << "\033[0;32m" << ln_m << "\033[0m" << "\n";
	std::cout << "\033[0;32m" << nk_m << "\033[0m" << "\n";
}