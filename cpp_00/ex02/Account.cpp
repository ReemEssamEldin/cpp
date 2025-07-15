#include "Account.hpp"

int	Account::_nbAccounts = 0;			//Total number of accounts
int	Account::_totalAmount = 0;			//Sum of all account balances
int	Account::_totalNbDeposits = 0;		//Total number of deposits across all accounts
int	Account::_totalNbWithdrawals = 0;	//Total number of withdrawals across all accounts

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts), _amount(initial_deposit),
      _nbDeposits(0), _nbWithdrawals(0)
{
		_nbAccounts++;
		_totalAmount += initial_deposit;
		_displayTimestamp();
		std::cout << BLUE << "index:" << RESET << _accountIndex
			<< BLUE << ";" << RESET
			<< YELLOW << "amount:" << RESET << _amount
			<< YELLOW << ";" << RESET
			<< GREEN << "created" << RESET << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << BLUE << "index:" << RESET << _accountIndex
			<< BLUE << ";" << RESET
			<< YELLOW << "amount:" << RESET << _amount
			<< YELLOW << ";" << RESET
			<< RED << "closed" << RESET << std::endl;
}

int	Account::getNbAccounts(void) { return _nbAccounts; }
int	Account::getTotalAmount(void) { return _totalAmount; }
int	Account::getNbDeposits(void) { return _totalNbDeposits; }
int	Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << MAGENTA << "accounts:" << RESET << getNbAccounts()
			<< MAGENTA << ";" << RESET
			<< GREEN << "total:" << RESET << getTotalAmount()
			<< GREEN << ";" << RESET
			<< CYAN << "deposits:" << RESET << getNbDeposits()
			<< CYAN << ";" << RESET
			<< ORANGE << "withdrawals:" << RESET << getNbWithdrawals()
			<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << BLUE << "index:" << RESET << _accountIndex
			<< BLUE << ";" << RESET
			<< YELLOW << "p_amount:" << RESET << _amount
			<< YELLOW << ";" << RESET
			<< CYAN << "deposit:" << RESET << deposit
			<< CYAN << ";" << RESET;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << YELLOW << "amount:" << RESET << _amount
			<< YELLOW << ";" << RESET
			<< CYAN << "nb_deposits:" << RESET << _nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << BLUE << "index:" << RESET << _accountIndex
			<< BLUE << ";" << RESET
			<< YELLOW << "p_amount:" << RESET << _amount
			<< YELLOW << ";" << RESET;
	if (withdrawal > _amount)
	{
		std::cout << RED << "withdrawal:refused" << RESET
		<< RED << ";" << RESET << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ORANGE <<"withdrawal:" << RESET << withdrawal
			<< ORANGE << ";" << RESET
			<< YELLOW << "amount:" << RESET << _amount
			<< YELLOW << ";" << RESET
			<< ORANGE << "nb_withdrawals:" << RESET << _nbWithdrawals
			<< std::endl;
	return (true);
}

int	Account::checkAmount(void) const { return _amount; }

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << BLUE << "index:" << RESET << _accountIndex
			<< BLUE << ";" << RESET
			<< YELLOW << "amount:" << RESET << _amount
			<< YELLOW << ";" << RESET
			<< CYAN << "deposits:" << RESET << _nbDeposits
			<< CYAN << ";" << RESET
			<< ORANGE << "withdrawals:" << RESET << _nbWithdrawals
			<< std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(NULL);
	std::tm* tm = std::localtime(&t);
	std::cout << '['
			<< tm->tm_year + 1900
			<< std::setw(2) << std::setfill('0') << tm->tm_mon + 1
			<< std::setw(2) << tm->tm_mday << '_'
			<< std::setw(2) << tm->tm_hour
			<< std::setw(2) << tm->tm_min
			<< std::setw(2) << tm->tm_sec
			<< "] ";
	std::cout.fill(' ');
}
