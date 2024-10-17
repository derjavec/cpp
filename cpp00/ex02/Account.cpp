/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:50:55 by deniseerjav       #+#    #+#             */
/*   Updated: 2024/10/16 15:44:43 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
//#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
     _displayTimestamp();
     std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() 
              << ";total:" << getTotalAmount() 
              << ";deposits:" << getNbDeposits() 
              << ";withdrawals:" << getNbWithdrawals() 
              << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount - deposit 
              << ";deposit:" << deposit 
              << ";amount:" << _amount 
              << ";nb_deposits:" << _nbDeposits 
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex 
              << ";p_amount:" << _amount;
    if (withdrawal > _amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << ";withdrawal:" << withdrawal 
              << ";amount:" << _amount 
              << ";nb_withdrawals:" << _nbWithdrawals 
              << std::endl;
    return (true);
}

int Account::checkAmount() const
{
    return _amount;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void    Account::_displayTimestamp()
{
    time_t now;
    tm *ltm;
    
    now = time(0);
    ltm = localtime(&now); 
    std::cout<< "[" 
            << 1900 + ltm->tm_year
            << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon
            << std::setw(2) << std::setfill('0') << ltm->tm_mday
            << "_"
            << std::setw(2) << std::setfill('0') << ltm->tm_hour
            << std::setw(2) << std::setfill('0') << ltm->tm_min
            << std::setw(2) << std::setfill('0') << ltm->tm_sec
            << "]";
}
