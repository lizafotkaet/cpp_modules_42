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
    
};

static void	_displayTimestamp( void ){
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
};

static int	Account::getNbAccounts( void ){

};
static int	Account::getTotalAmount( void ){

}
static int	Account::getNbDeposits( void ){

}
static int	Account::getNbWithdrawals( void ){

};
static void	Account::displayAccountsInfos( void ){

};


void	Account::makeDeposit( int deposit );
bool	Account::makeWithdrawal( int withdrawal );
int		Account::checkAmount( void ) const;
void	Account::displayStatus( void ) const;