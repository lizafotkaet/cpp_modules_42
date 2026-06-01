#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _nbDeposits(), _nbWithdrawals(), _amount(initial_deposit){

    _accountIndex = _nbAccounts++;
    _totalAmount += _amount;

    ::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account( void ){
//[19920104_091532] index:0;amount:47;closed
    ::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
    _nbAccounts--;
    _totalAmount -= _amount;
    
}

// --------------------------------------------------------
// ----------- static private method ----------------------
// --------------------------------------------------------

void	_displayTimestamp( void ){
    std::time_t now = std::time(nullptr);
    std::tm* timeinfo = std::localtime(&now);
    std::cout << "[";
    std::cout << std::put_time(timeinfo, "%Y%m%d_%H%M%S");
    std::cout << "] ";

    // std::time_t now = std::time(nullptr);
    // std::tm* timeinfo = std::localtime(&now);
    // char buffer[20];
    // std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timeinfo);
    // std::cout << "[" << buffer << "] ";
}

// --------------------------------------------------------
// ----------- static public methods ----------------------
// --------------------------------------------------------

int	Account::getNbAccounts( void ){
    return _nbAccounts;
}

int	Account::getTotalAmount( void ){
    return _totalAmount;
}

int	Account::getNbDeposits( void ){
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}

// ALL TOTAL: total number of accounts, total amount of money, 
//total number of deposits and total number of withdrawals:

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";
}

// --------------------------------------------------------
// ----------- non-static public methods ------------------
// --------------------------------------------------------

void	Account::makeDeposit( int deposit ){
    _displayTimestamp();
    // [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();

    // [19920104_091532] index:0;p_amount:47;withdrawal:refused

    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;

    if (withdrawal > _amount){
        std::cout << ";withdrawal:refused\n";
        return false;
    }

    // [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1

    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << "\n";
    return true;
}

// get amount of money for one account

int		Account::checkAmount( void ) const{
    return _amount;
}

// get status of ONE account

void	Account::displayStatus( void ) const{
    // [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}
