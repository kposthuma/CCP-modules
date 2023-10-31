/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 18:42:10 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 12:58:03 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<iomanip>
#include<string>
#include <vector>
#include <algorithm>
#include <functional>
#include "../include/Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = getNbAccounts();
	_nbAccounts += 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << initial_deposit << ";"
		<< "created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{	
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << _amount + deposit << ";"
		<< "nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "withdrawal:";
	if (withdrawal > _amount){
		std::cout << "refused" << std::endl;
		return false;
	}
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << withdrawal << ";"
		<< "amount:" << _amount - withdrawal << ";"
		<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return true;
}

int		Account::checkAmount( void ) const
{
	return 0;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << std::endl;
}


void	Account::_displayTimestamp( void )
{
	time_t t = time(0);
	struct tm *time = localtime(&t);
	std::cout << "[" 
		<< time->tm_year + 1900
		<< std::setw(2) << std::setfill('0') << time->tm_mon + 1
		<< std::setw(2) << std::setfill('0') << time->tm_mday
		<< "_"
		<< std::setw(2) << std::setfill('0') << time->tm_hour
		<< std::setw(2) << std::setfill('0') << time->tm_min
		<< std::setw(2) << std::setfill('0') << time->tm_sec
		<< "] ";
}

Account::Account( void )
{
	return ;
}

