/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelaval <alelaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 20:12:03 by alelaval          #+#    #+#             */
/*   Updated: 2022/07/12 15:32:18 by alelaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <ostream>

/* **** Class PhoneBook **** */
class PhoneBook {
	
public:

	PhoneBook();
	~PhoneBook();
	void ADD();
	void SEARCH();
	
private:
	
	Contact _contacts[8];
	int	_index;
	int	getInt();

};

# endif