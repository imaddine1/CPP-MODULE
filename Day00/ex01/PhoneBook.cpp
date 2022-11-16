/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:37:05 by iharile           #+#    #+#             */
/*   Updated: 2022/11/16 13:05:22 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	take_number()
{
	std::string selected;

	std::cout << "\033[0;34mChose from the list below:\033[0m\n";
	std::cout << " \033[0;33m1.ADD\033[0m\n";
	std::cout << " \033[0;33m2.SEARCH\033[0m\n";
	std::cout << " \033[0;33m3.EXIT\033[0m\n";
	std::cout << " \033[0;33mEnter here: \033[0m";
	if (!std::getline(std::cin, selected))
		exit(1);
	if (!selected.compare("ADD"))
		return (1);
	else if (!selected.compare("SEARCH"))
		return (2);
	else if (!selected.compare("EXIT"))
		return (3);
	else
		return (0);
	return (0);
}

int	isEmpty(std::string str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (!str.length() || i == (int)str.length())
	{
		std::cout << "\033[0;31mEmpty field not allowed\033[0m\n";
		return (0);
	}
	return (1);
}

void	PhoneBook::add()
{
	std::string fn;
	std::string	ln;
	std::string	nk;
	std::string	nb;
	std::string	ds;		
	static int	i;
	int			j;

	if (i > 7)
		i = 0;
	while (true)
	{
		std::cout << "\033[0;35mFirst Name !\033[0m\n";
		if (!std::getline(std::cin, fn))
			exit (1);
		if (isEmpty(fn))
			break ;
	}
	while (true)
	{
		std::cout << "\033[0;35mLast Name !\033[0m\n";
		if (!std::getline(std::cin, ln))
			exit (1);
		if (isEmpty(ln))
			break;
	}
	while (true)
	{
		std::cout << "\033[0;35mNick Name !\033[0m\n";
		if(!std::getline(std::cin, nk))
			exit(1);
		if (isEmpty(nk))
			break ;
	}
	while (true)
	{
		std::cout << "\033[0;35mNumber Phone !\033[0m\n";
		if (!std::getline(std::cin, nb))
			exit (1);
		if (isEmpty(nb))
			break;
	}
	while (true)
	{
		std::cout << "\033[0;35mdarkest secret !\033[0m\n";
		if (!std::getline(std::cin, ds))
			exit (1);
		if (isEmpty(ds))
			break ;
	}
	j = i;
	contact[i++].set_info(fn, ln, nk, nb, j, ds);
}


void	PhoneBook::search()
{
	std::string	number;
	int			no;
	int			i;

	i = 0;
	no = 0;
	while (i < 8)
	{
		if (contact[i].get_index() > -1)
			i++;
		else
			break ;
	}
	if (i == 0)
	{
		std::cout << "there is nothing to display!!\n";
		return ;
	}
	while (no < i)
	{
		contact[no].get_display();
		std::cout << "\n";
		no++;
	}
	std::cout << "Enter The index:: ";
	std::getline(std::cin, number);
	
	if (number.length() > 1)
		no = -1;
	else
		no = number[0] - 48;
	if (no >= 0 && no < i)
		contact[no].get_by_index();
	else
		std::cout << "\033[0;31mthis index is out of range or wrong\033[0m\n";
}

int	main()
{
	PhoneBook	phonebook;
	int			selected;

	while (true)
	{
		selected = take_number();
		if (selected == 3)
			break;
		else if (selected == 1)
			phonebook.add();
		else if (selected == 2)
			phonebook.search();
		else
			std::cout << "\033[0;31mYou entred somthing not in the LIST??\033[0m\n";
	}
	return (0);
}
