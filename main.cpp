#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "AccountManager.h"
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
using namespace std;
int main(){
	

AccountManager m;

//ifstream constructor opens the fiel
   
  ifstream inClientFile("account_ledger.txt", ios::in);
  
  //exit program if ifstream could not open file
  if (!inClientFile)
  {
      cerr <<"File could not be opened" <<endl;
      exit (EXIT_FAILURE);
  } //end if
  string name,line,action,character, account,balance;
  
  while(getline(inClientFile,line)){
  
          cout <<line <<endl;
          stringstream iss(line);
          getline(iss,action, ' ');
          getline(iss,name, ' ');
          getline(iss,account, ' ');
          getline(iss,balance, ' ' );
  
  
//Parsing 
inClientFile>> character;

int Limit1,IDD,balance, withdraw, deposit, purchasevariable;

 ifstream inClientFile("account_ledger.txt", ios::in);
 typedef map<int, Account*> account_map;
 account_map mymap;
 
         //exit program if ifstream could not open file
         if (!inClientFile)
         {
         cerr <<"File could not be opened" <<endl;
         exit (EXIT_FAILURE);
         } //end if
 
         string name,line,action,character, account,stringbalance;
         while(getline(inClientFile,line)){ 
          cout <<line <<endl;
          stringstream iss(line);
          getline(iss,action, ' ');
          getline(iss,name, ' ');
          getline(iss,account, ' ');
          getline(iss,stringbalance, ' ' );
          //Parsing 
 
          if (action=="Create"){
          IDD = atoi(account.c_str());
          Account *p_Acct = new SavingsAccount(name, IDD, atoi(stringbalance.c_str()));
          mymap[IDD] = p_Acct;
                 }
                 if(action=="setCreditLimit")
                 IDD = atoi(name.c_str());
                 acc = mymap[IDD];
                 acc->setCreditLimit(Limit1);
 
                 if(action=="query")
                 acc ->queryAccount();
 
                 if(action=="deposit")
                 acc->deposit(deposit);
 
                 if(action=="withdraw")
                 acc-> withdraw(withdraw);
 
                 if(action=="purchase")
                 acc->purchase(purchasevariable);
 
                 if(action=="payBill")
                 acc->payBill();
                 }
 
  
  return 0;


}

