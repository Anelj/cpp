#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<
	";created\n";
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<
			  ";closed\n";
}

std::string zeroToPrint(int data)
{
	if (data < 10)
		return "0";
	return "";
}

void Account::_displayTimestamp( void )
{
	std::time_t t = std::time(0);
	std::tm *now = std::localtime(&t);

	std::cout
			<< "["
			<< (now->tm_year + 1900)
			<< zeroToPrint((now->tm_mon + 1)) << (now->tm_mon + 1)
			<< zeroToPrint(now->tm_mday) << now->tm_mday
			<< "_"
			<< zeroToPrint(now->tm_hour) << now->tm_hour
			<< zeroToPrint(now->tm_min) << now->tm_min
			<< zeroToPrint(now->tm_sec) << now->tm_sec
			<< "] ";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<
	";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits <<
	std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<
			  ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused\n";
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" <<
	_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits << ";withdrawals:" <<
	_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits << ";withdrawals:" <<
			  _nbWithdrawals << std::endl;
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
