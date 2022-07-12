/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelaval <alelaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:47:19 by alelaval          #+#    #+#             */
/*   Updated: 2022/07/05 14:07:48 by alelaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int main(int ac, char **av)
{
	std::string str;
	std::locale loc;
	if (ac > 1)
	{
		for  (int i = 1; i < ac; ++i)
		{
			str = av[i];
			for(std::string::size_type i = 0; i < str.length(); ++i)
				std::cout << std::toupper( str[i], loc) << std::flush;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}