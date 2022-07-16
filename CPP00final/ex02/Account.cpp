/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelaval <alelaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:45:06 by alelaval          #+#    #+#             */
/*   Updated: 2022/07/16 13:39:54 by alelaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

/* **** PUBLIC **** */

int Account::_nbAccounts;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
}

Account::~Account( void )
{}

int	Account::getNbAccounts( void )
{
	return (t::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (t::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (t::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (t::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	t::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total" << getTotalAmount() << ";deposits" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int tmp;

	tmp = _amount;
	if ((tmp - withdrawal) < 0)
		return (false);
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
	}
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	t::_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";amount:" << t::_amount << ";deposits:" << t::_nbDeposits << ";withdrawals" << t::_nbWithdrawals <<  std::endl;
}

/* **** PRIVATE **** */

void	Account::_displayTimestamp( void )
{
	//char *str = NULL;
	//time_t rawtime;
	//struct tm * timeinfo;

	//time (&rawtime);
	//timeinfo = localtime(&rawtime);
	
	//strftime(str, 80, "[%Y%m%d%_%H%M%S", timeinfo);
	//std::cout << str << std::endl;
	std::cout << "[ayyy lmao] " << std::flush;
}
