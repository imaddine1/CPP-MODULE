/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:37:05 by iharile           #+#    #+#             */
/*   Updated: 2022/11/15 20:23:38 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	take_number()
{
	std::string selected;

	std::cout << "You can enter just one element from the list below\n";
	std::cout << "1.ADD\n";
	std::cout << "2.SEARCH\n";
	std::cout << "3.EXIT\n";
	std::cout << "Enter here: ";
	if (!std::getline(std::cin, selected))
		exit(1);
	if (!selected.compare("ADD"))
		return (1);
	else if (!selected.compare("SEARCH"))
		return (2);
	else if (!selected.compare("EXIT"))
		return (3);
	else
		std::cout << "You entered somthing that not in the list, Try again\n";
	return (0);
}


void	PhoneBook::add()
{
	std::string fn;
	std::string	ln;
	std::string	nk;
	std::string	nb;			
	static int	i;
	int			j;

	if (i > 7)
		i = 7;
	std::cout << "First Name !\n";
	std::getline(std::cin, fn);
	std::cout << "Last Name !\n";
	std::getline(std::cin, ln);
	std::cout << "Nick Name !\n";
	std::getline(std::cin, nk);
	std::cout << "Number Phone !\n";
	std::getline(std::cin, nb);
	j = i;
	contact[i++].set_info(fn, ln, nk, nb, j);
}


void	PhoneBook::search()
{
	std::string	number;
	int			no;

	while (1)
	{
		std::cout << "Enter Your index !!\n";
		std::getline(std::cin, number);
		int i = 0;
		while (i < 8)
		{
			int ok = contact[i].get_index();
			if (ok > -1)
				i++;
			else
				break;
		}
		no = std::stoi(number);
		if (no >= 0 && no < i)
			contact[no].get_display();
		else
		{
			std::cout << "You entred somthing not in phonebook\n";
			break ;
		}
	}
	
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
		{
			std::cout << "You entred somthing not in the LIST??\n";
			break ;
		}
	}
	return (0);
}
