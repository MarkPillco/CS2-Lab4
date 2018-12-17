#include <iostream>
#include <cmath>
#include "Checking.h"

using namespace std;
  	
//Overridden Withdrawl Account
void CheckingAccount::withdraw(int withdrawlAmount){
   bool check=true;
    while (check==true){
        if (withdrawlAmount > 0) { 
         balance = balance - withdrawlAmount-fee;
	} 
   	   else if (withdrawlAmount> balance){
	        check==false;
		if (check==false)
		{cout<< "error Invalid command" <<endl;}
	   }
    }
        
}
//Overridden Deposit Account	
void CheckingAccount::deposit(int depositAmount) {
    bool check=true;
     while (check==true){
	if (depositAmount > 0) { 
        balance = balance + depositAmount-fee; 
        }
	    else if (depositAmount== 0){
	        check == false;
	        if (check==false)
                {cout << "error Invalid command" <<endl;}
	    }
    }
}

//Overriden Annual Interest

void CheckingAccount::addAnnualInterest() {
	int flag;
	flag=1;
	float oldBalance = balance;
	if (flag == 1){
		balance = balance*pow (1+IR/12, 12);
	}
        cout << "Interest added: " << balance - oldBalance << endl;
}

void CheckingAccount::queryAccount() {
  
          cout << "**** CheckingAccount for  " << name << " ***** ID = " << ID << " ******" << endl;
          cout << "Account Balance: " << balance << endl;
          cout << "credit card info: " << std::endl;
          cout << "Credit Limit: " << creditLimit << endl;
          cout << "Credit Balance: " << creditBalance<< endl;
          cout << "Available Credit: " << creditLimit - creditBalance << endl;
          cout << "***************" << endl << endl;
  }

