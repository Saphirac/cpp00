/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:35:34 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/11 01:21:06 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

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
	_displayTimestamp();
	std::cout <<
	"accounts:" << getNbAccounts() << ';' <<
	"total:" << getTotalAmount() << ';' <<
	"deposits:" << getNbDeposits() << ';' <<
	"withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( void ):
_accountIndex(_nbAccounts),
_amount(0),
_nbDeposits(0),
_nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout <<
	"index:" << _accountIndex << ';' <<
	"amount:" << _amount << ';' <<
	"created" << std::endl;
	Account::_nbAccounts++;
}

Account::Account( int initial_deposit ):
_accountIndex(_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout <<
	"index:" << _accountIndex << ';' <<
	"amount:" << _amount << ';' <<
	"created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_displayTimestamp();
	std::cout <<
	"index:" << _accountIndex << ';' <<
	"amount:" << _amount << ';' <<
	"closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int const	p_amount(_amount);

	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex << ';'
	<< "p_amount:" << p_amount << ';'
	<< "deposit:" << deposit << ';'
	<< "amount:" << _amount << ';'
	<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ";"
	<< "p_amount:" << this->_amount << ";"
	<< "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ';' <<
	"amount:" << _amount << ';' <<
	"nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout <<
	"index:" << _accountIndex << ";" <<
	"amount:" << _amount << ";" <<
	"deposits:" << _nbDeposits << ";" <<
	"withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	now;
	std::tm		*timeinfo;

	std::time(&now);
	timeinfo = std::localtime(&now);
	std::cout << "["
	<< std::setfill('0')
	<< std::setw(4) << timeinfo->tm_year + 1900
	<< std::setw(2) << timeinfo->tm_mon + 1
	<< std::setw(2) << timeinfo->tm_mday
	<< "_"
	<< std::setw(2) << timeinfo->tm_hour
	<< std::setw(2) << timeinfo->tm_min
	<< std::setw(2) << timeinfo->tm_sec
	<< std::setw(1)
	<< "] ";
}
