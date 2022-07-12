/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelaval <alelaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:29:32 by alelaval          #+#    #+#             */
/*   Updated: 2022/07/12 15:34:50 by alelaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	_FirstName.assign("");
	_LastName.assign("");
	_NickName.assign("");
	_PhoneNumber.assign("");
	_DarkestSecret.assign("");
}

Contact::~Contact(void)
{}

void Contact::ADD()
{
	_FirstName.assign("");
	while (_FirstName.empty())
	{
		std::cout << "first name : " << std::endl << std::flush;
		std::getline(std::cin, _FirstName);
	}
	_LastName.assign("");
	while (_LastName.empty())
	{
		std::cout << "last name : " << std::endl << std::flush;
		std::getline(std::cin, _LastName);
	}
	_NickName.assign("");
	while (_NickName.empty())
	{
		std::cout << "nick name : " << std::endl << std::flush;
		std::getline(std::cin, _NickName);
	}
	_PhoneNumber.assign("");
	while (_PhoneNumber.empty())
	{
		std::cout << "phone number : " << std::endl << std::flush;
		std::getline(std::cin, _PhoneNumber);
	}
	_DarkestSecret.assign("");
	while (_DarkestSecret.empty())
	{
		std::cout << "darkest secret : " << std::endl << std::flush;
		std::getline(std::cin, _DarkestSecret);
	}
}

void Contact::PrintColumn(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0,9) + ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << '|';
}

void Contact::PrintFullColumn(std::string str)
{
	std::cout << std::setw(10) << str;
	std::cout << '|';
}

void Contact::PrintContact(void)
{
	PrintColumn(_FirstName);
	PrintColumn(_LastName);
	PrintColumn(_NickName);
	PrintColumn(_PhoneNumber);
	std::cout << std::endl;
}

void Contact::PrintFullContact(void)
{
	std::cout << "First Name : " << _FirstName << std::endl; 
	std::cout << "Last Name : " << _LastName << std::endl;
	std::cout << "Nickname : " << _NickName << std::endl;
	std::cout << "Phone Number : " << _PhoneNumber << std::endl;
	std::cout << "Darkest Secret : " << _DarkestSecret << std::endl;
}

std::string Contact::getFirstName()
{
	std::string str;
	
	return (str = _FirstName);
}

std::string Contact::getLastName()
{
	std::string str;
	
	return (str = _LastName);
}

std::string Contact::getNickName()
{
	std::string str;
	
	return (str = _NickName);
}

std::string Contact::getPhoneNumber()
{
	std::string str;
	
	return (str = _PhoneNumber);
}

std::string Contact::getDarkestSecret()
{
	std::string str;
	
	return (str = _DarkestSecret);
}
