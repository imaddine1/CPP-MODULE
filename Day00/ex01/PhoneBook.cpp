/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:37:05 by iharile           #+#    #+#             */
/*   Updated: 2022/11/08 21:28:29 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	take_number()
{
	std::string selected;

	std::cout << "You can enter just one element from the list below\n";
	std::cout << "1.ADD\n";
	std::cout << "2.SEARCH\n";
	std::cout << "3.EXIT\n";
	std::cout << "Enter here: ";
	std::getline(std::cin, selected);
	std::cout << "-------\n" << selected << "\n" << "------\n";
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

void	PhoneBook::add(PhoneBook Ph)
{
	(void)Ph;
}

int	main()
{
	PhoneBook	phonebook;
	int			selected;

	while (true)
	{
		selected = take_number();
		std::cout << selected << '\n';
		if (selected == 3)
			break;
		else if (selected == 1)
			add(phonebook);	
	}
	return (0);
}
