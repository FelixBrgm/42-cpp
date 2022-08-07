#include "Account.hpp"
#include <chrono>

Account::Account()
{

}

Account::Account(int amount)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created";
}
Account::~Account( void )
{
	std::cout << "Deconstructed";
}
void Account::_displayTimestamp(void)
{
	std::string time;
	time = std::to_string(std::chrono::system_clock::now().time_since_epoch().count());
	std::cout << "[" << time.substr(0, 8) << "_" << time.substr(8, 6) << "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();

}