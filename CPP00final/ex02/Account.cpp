/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelaval <alelaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:45:06 by alelaval          #+#    #+#             */
/*   Updated: 2022/07/12 16:10:10 by alelaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/* **** PUBLIC **** */

Account::Account( int initial_deposit )
{
	;
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
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	;
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	;
}

int		Account::checkAmount( void ) const
{
	;
}

void	Account::displayStatus( void ) const
{
	;
}

/* **** PRIVATE **** */

static void	_displayTimestamp( void )
{
	;
}
