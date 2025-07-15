#include "Account.hpp"
#include <cstdlib>

int main(void) {
    Account accounts[] = {Account(42), Account(54), Account(957), Account(432), Account(1234), Account(0), Account(754), Account(16576)};
    size_t n = sizeof(accounts) / sizeof(Account);

    Account::displayAccountsInfos();
    for (size_t i = 0; i < n; ++i)
        accounts[i].displayStatus();

    int deposits[] = {5, 765, 564, 2, 87, 23, 9, 20};
    for (size_t i = 0; i < n; ++i)
        accounts[i].makeDeposit(deposits[i]);

    Account::displayAccountsInfos();
    for (size_t i = 0; i < n; ++i)
        accounts[i].displayStatus();

    int withdrawals[] = {321, 34, 657, 4, 76, 275, 657, 7654};
    for (size_t i = 0; i < n; ++i)
        accounts[i].makeWithdrawal(withdrawals[i]);

    Account::displayAccountsInfos();
    for (size_t i = 0; i < n; ++i)
        accounts[i].displayStatus();

    return EXIT_SUCCESS;
}
