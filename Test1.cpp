#include <iostream>
#include <stack>

#include <fstream>
#include <sstream>
#include <iomanip>
#include <map>
#include <cstdlib>
#include <stdlib.h>

#include "Savings.h"
#include "Checking.h"
#include "AccountManager.h"
#include "Account.h"

using namespace std;

class Double {
public:
	Double(double input): v{input} {}
	Double(){};
	double v;
	virtual void print(){cout <<" I am a Double " << endl;};


};


class Int: public Double{
	public:
	Int(int input): v2{input} {}
	Int(){};
	void Instance(){cout << "Value: "; cin >> v2;} 
	int v2;
	virtual void print(){
	cout << "I am an Int" << endl;
	}	


};

class Float: public Double{
public:
	Float(float input): v2{input} {}
	Float(){};
	void Instance(){cout << "Value: "; cin >> v2;}
	float v2;
	virtual void print(){
	cout << "I am Float" << endl;
  
	}

};

class Char: public Double{
	public:
	Char(char input): v2{input} {}
	Char(){};
	void Instance(){cout << "Value: "; cin >> v2;}
	char v2;
	virtual void print(){
	cout << "I am Char" << endl;
	}
  
};

class Str: public Double{
 	public:
	Str(string input): v2{input} {}
	Str(){};
	void Instance(){cout << "Value: "; cin >> v2;}
	string v2;
	virtual void print(){
	cout << "I am string" << endl;
  
          }
  
  };


int main(){

cout << "Question 1" << endl;

	AccountManager p;
	p.createAccount("John Doe", 2000, 5000);
	Account *acc = p.getAccount(4000); // not exist error
	acc = p.getAccount(5000);
	acc->setCreditLimit(1000);
	acc->queryAccount();
	acc->purchase(500);
	acc->queryAccount();
	acc->payBill();
	acc->queryAccount();
	acc->setInterestRate(0.1);
	acc->addAnnualInterest();
	acc->queryAccount();
	acc = p.getAccount(5000); // retrieve again
	acc->queryAccount();



//Question 2
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

 	string name,line,action,account,stringbalance;
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

		//if(action=="deposit")
		//acc->deposit(deposit);
		/*
		if(action=="withdraw")
		acc-> withdraw(withdraw);
	
		if(action=="payBill")
		acc->payBill();
		
	 	if(action=="query")
                acc ->queryAccount();

		if(action=="purchase")
                acc->purchase(purchasevariable);
 		*/
		}


//Question 3
cout << "Question 3 " << endl;
stack<Double*> myObj;
//Create Objs
Double * Dubptr = new Double();

Double * Intptr = new Int(3);
Double * Intptr1 = new Int(4);
Double * Intptr2 = new Int(5);

Double * Strptr = new Str("xd");
Double * Strptr1 = new Str("le");

Double * Fltptr = new Float(8);
Double * Fltptr1 = new Float(2);

Double * Chrptr = new Char('X');
Double * Chrptr1 = new Char('D');
//Push Objs in

myObj.push(Dubptr);

myObj.push(Intptr);
myObj.push(Intptr1);
myObj.push(Intptr2);


myObj.push(Strptr);
myObj.push(Strptr1);

myObj.push(Fltptr);
myObj.push(Fltptr1);

myObj.push(Chrptr);
myObj.push(Chrptr1);

//print
for( int i=0; i<=10;i++)
{
myObj.top()->print();
myObj.pop();
}


return 0;

}


