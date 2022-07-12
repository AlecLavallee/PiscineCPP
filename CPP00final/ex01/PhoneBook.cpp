/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelaval <alelaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:20:42 by alelaval          #+#    #+#             */
/*   Updated: 2022/07/12 15:32:58 by alelaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
}

PhoneBook::~PhoneBook()
{
	;
}

void PhoneBook::ADD()
{
	if (_index == 8)
		_index = 0;
	_contacts[_index].ADD();
	_index++;
}

int	toInt()
{
	int i;
	std::stringstream ss;
	std::string		s;

	std::cin >> s;
	ss << s;
	ss >> i;
	return (i);
}

void PhoneBook::SEARCH()
{
	int i;

	std::cout << "First Name | Last Name | Nickname | Phone Number" << std::endl;
	for (i = 0; i < 8; i++)
		_contacts[i].PrintContact();
	i = -1;
	while (1)
	{
		std::cout << "Enter a number between 1-8 : " << std::endl;
		i = toInt();
		if (i >= 1 && i <= 8)
		{
			_contacts[i - 1].PrintFullContact();
			break;
		}
	}
}
