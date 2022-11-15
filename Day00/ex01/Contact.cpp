#include <string.h>
#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
	index_m = -10;
	fn_m = "NULL";
	ln_m = "NULL";
	nk_m = "NULL";
	nb_m = "NULL";
}

void	Contact::set_info(std::string fn, std::string ln, std::string nk, std::string nb, int index)
{
		index_m = index;
		fn_m = fn;
		ln_m = ln;
		nk_m = nk;
		nb_m = nb;
}

int  Contact::get_index()
{
	return index_m;
}

//error
void	Contact::get_display()
{

	std::cout << "im here" << fn_m;

}