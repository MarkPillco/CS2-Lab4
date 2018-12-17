#include <iostream>
#include "AccountManager.h"
#include "Savings.h"
#include "Checking.h"
using namespace std;

void AccountManager::createAccount(string accountName, int initialBalance, int acctID)
{
 
cout <<"Whould you like to make a Checking or Savings Account (1=Checking 2=Savings)?" <<endl;
int indicate;
cin >> indicate;


if (checkDuplicate(acctID))
        cout << "duplicate ID, account not created" << endl;
 
  else{
  if (indicate== 1){
  Account* a = new CheckingAccount(accountName, initialBalance, acctID);
                          allAccounts.push_back(a);
                          cout << " account " << acctID << " for " << accountName << " created successfully!" << endl;		
   			  
  }			  
  else if(indicate== 2){ 
  Account* a = new SavingsAccount(accountName, initialBalance, acctID);
                            allAccounts.push_back(a);
                            cout << " account " << acctID << " for " << accountName << " created successfully!" << endl;    
  }			    
 
}

}
Account* AccountManager::getAccount (int ID)
{
    Account *result;
    
    for (unsigned int j{0}; j < allAccounts.size(); ++j) {
        
        if (ID == allAccounts[j]->getID())
               		result = allAccounts[j];
                else
                {
                    cout << "can't find account ID = " << ID << endl;
                    result = NULL;
                }
    }
    
    return result;
}


AccountManager::~AccountManager()
{
    for (int i =0; i< allAccounts.size();i++)
    {
        delete (allAccounts[i]);
    }
    
    allAccounts.clear();
}


bool AccountManager::checkDuplicate(int ID)
{
	    bool duplicate = false;
	    for (unsigned int j{0}; j < allAccounts.size(); ++j) {
            	if (ID == allAccounts[j]->getID()) {
               	duplicate = true;
                break;
                };
	     }
	    return duplicate;
}




