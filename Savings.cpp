#include <iostream>
#include <cmath>
#include "Savings.h"

using namespace std; 

  //Overriden Withdraw Function
  void SavingsAccount::withdraw(int withdrawlAmount){
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
  //Overridden Deposit Function
   void SavingsAccount::deposit(int depositAmount) {
      bool check=true;
       while (check == true){
          if (depositAmount > 0) {
          balance = balance + depositAmount-fee;
          }
              else if (depositAmount== 0){
                   check==false;
                  if (check==false)
                  {cout<< "error Invalid command" <<endl;}
              }
      }
  }
    //Overriden Annual Interest Function
    void SavingsAccount::addAnnualInterest() {
	
        int flag;
	float oldBalance = balance;
         
         flag==0;
	
        if (flag == 0)
		balance = balance*pow (1+IR/365, 365);
	else {
		cout << "error, methods of compounding not supported" << endl;
		return;
	}
	
        cout << "Interest added: " << balance - oldBalance << endl;
}


void SavingsAccount::queryAccount() {
  
          cout << "**** Savings Account for  " << name << " ***** ID = " << ID << " ******" << endl;
          cout << "Account Balance: " << balance << endl;
          cout << "credit card info: " << std::endl;
          cout << "Credit Limit: " << creditLimit << endl;
          cout << "Credit Balance: " << creditBalance<< endl;
          cout << "Available Credit: " << creditLimit - creditBalance << endl;
          cout << "***************" << endl << endl;
  }

