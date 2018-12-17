#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <string>
#include <vector>
#include "Account.h"
#include <fstream>
#include <sstream>

class AccountManager{

public:
    void createAccount(std::string accountName, int initialBalance, int acctID = 9999);
    Account* getAccount (int ID);
      
   ~AccountManager(); 

private:
    bool checkDuplicate(int ID);
	std::vector<Account*> allAccounts;
};

#endif
