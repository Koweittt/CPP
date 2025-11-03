/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:48:16 by koweit            #+#    #+#             */
/*   Updated: 2025/11/03 08:40:25 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int  Account::getTotalAmount(void)
{
    return _totalAmount;
}

int  Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int  Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount = _amount + deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -=withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount(void) const
{
    return (_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << ";" << std::endl;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);
    std::tm* local = std::localtime(&now);
    
    std::cout << "[" << (local->tm_year + 1900)
    << std::setfill('0') << std::setw(2) << local->tm_mon + 1
    << std::setw(2) << local->tm_mday << "_"
	<< std::setw(2) << local->tm_hour
	<< std::setw(2) << local->tm_min
	<< std::setw(2) << local->tm_sec << "]";
}

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) 
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _totalAmount -= _amount;
    _nbAccounts--;
    _totalNbDeposits -= _nbDeposits;
    _totalNbWithdrawals -= _nbWithdrawals;
}