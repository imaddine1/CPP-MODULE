/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:39:29 by iharile           #+#    #+#             */
/*   Updated: 2022/11/08 21:29:05 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REGISTER_HPP
#define REGISTER_HPP
#include <iostream>
#include <string.h>

class	Contact
{
	std::string	fn;
	std::string	ln;
	std::string	nk;
	int			nb;	
};

class	PhoneBook
{
	Contact	contact[8];
	
	public:
	void	add(PhoneBook Ph);
};


#endif
