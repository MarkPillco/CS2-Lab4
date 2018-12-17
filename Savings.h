#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"
#include <string>

class SavingsAccount:public Account{

public:
    
    SavingsAccount(std::string accountName, int initialBalance, int acctID) 
	: Account(accountName, initialBalance, acctID)
{} 
    
    void deposit(int depositAmount);
    void withdraw(int withdrawalAmount);
    virtual void addAnnualInterest();
    virtual void queryAccount() ;
    protected:
    double fee{1};


};
#endif
