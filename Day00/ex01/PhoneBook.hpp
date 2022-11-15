/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:39:29 by iharile           #+#    #+#             */
/*   Updated: 2022/11/15 19:07:59 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REGISTER_HPP
#define REGISTER_HPP
#include "Contact.hpp"

class	PhoneBook
{
	Contact	contact[8];
	
	public:
	void	add();
	void	search();
};


#endif
