/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelaval <alelaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:45:06 by alelaval          #+#    #+#             */
/*   Updated: 2022/07/13 22:39:01 by alelaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

/* **** PUBLIC **** */

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
}

Account::~Account( void )
{}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	int ret = 0;

	std::cout << _totalNbWithdrawals;
	return (ret);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << getNbAccounts() << ";total" << getTotalAmount() << ";deposits" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int tmp;

	tmp = _amount;
	if ((tmp - withdrawal) < 0)
		return (false);
	else
		_amount -= withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	displayAccountsInfos();
}

/* **** PRIVATE **** */

void	Account::_displayTimestamp( void )
{
	char *str = NULL;
	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
	timeinfo = localtime(&rawtime);
	
	strftime(str, 80, "[%Y%m%d%_%H%M%S", timeinfo);
	std::cout << str << std::flush;
}
