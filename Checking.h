#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"
#include <string>


class CheckingAccount: public Account
{
   public:
    //Constructor
    CheckingAccount(std::string accountName, int initialBalance, int acctID = 9999)
    :Account(accountName, initialBalance, acctID) 
{}
    //Override Functions
    void deposit( int depositAmount);
    void withdraw(int withdrawlAmount);
    virtual void addAnnualInterest();
    virtual void queryAccount() ;

    protected:
	double fee{1};


    




};

#endif 
    
	                 
