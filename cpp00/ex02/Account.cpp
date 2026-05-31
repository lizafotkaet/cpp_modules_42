#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;

Account::Account( int initial_deposit ) : _nbDeposits(), _nbWithdrawals(), _amount(initial_deposit){

    _accountIndex = _nbAccounts++;
    _totalAmount += _amount;

    ::_displayTimestamp();
    std::cout << "index: " << _accountIndex << ";amount: " << _amount;
}

Account::~Account( void ){



};

static void	_displayTimestamp( void ){

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