#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <ctime>
#include <iomanip>

//ANSI escape codes for colored output
#define BLUE	"\033[0;34m"
#define YELLOW	"\033[0;33m"
#define GREEN	"\033[0;32m"
#define RED		"\033[0;31m"
#define MAGENTA	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define ORANGE	"\033[0;38;5;208m"

#define RESET	"\033[0m"


class Account
{
public:
	typedef Account t;

	static int getNbAccounts(void);
	static int getTotalAmount(void);
	static int getNbDeposits(void);
	static int getNbWithdrawals(void);
	static void displayAccountsInfos(void);

	Account(int initial_deposit);
	~Account(void);

	void makeDeposit(int deposit);
	bool makeWithdrawal(int withdrawal);
	int checkAmount(void) const;
	void displayStatus(void) const;

private:
	static int _nbAccounts;
	static int _totalAmount;
	static int _totalNbDeposits;
	static int _totalNbWithdrawals;

	int _accountIndex;
	int _amount;
	int _nbDeposits;
	int _nbWithdrawals;

	static void _displayTimestamp(void);

	Account(void);
};

#endif
