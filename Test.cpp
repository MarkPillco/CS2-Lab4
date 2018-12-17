#include <iostream>
#include "Complex.h"
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "AccountManager.h"

using namespace std;

//Definition

void swap(double &a1, double &b1, double &c1);
void swap(double *a1, double *b1, double *c1);

int main ()
{
 //Complex

  Complex a(1, 7);
  Complex b(9, 2);
  
  //Addition
  Complex c= a+b;
  cout << a.toString() << " + " << b.toString() << " = " << c.toString() << '\n' ; 
  
  //Subtraction
  Complex d =a-b;
  cout << a.toString() << " - " << b.toString() << " = " << d.toString() << '\n' ;
  //Multiplication
  Complex e =a*b;
  cout << a.toString() << " * " << b.toString() << " = " << e.toString() << '\n' ;

  //Set

  a.setComplexNumber(10, 1 ); //reset 
  b.setComplexNumber(11, 5 );

    //Reference

    double a1,b1,c1;
    a1=2, b1=4, c1=1;
    cout << a1 << " , " << b1 << ", " << c1 << endl;
    swap(a1,b1,c1);
    cout << a1 << " , " << b1 << ", " << c1 << endl;

    //Pointers
    
    a1=2, b1=4, c1=1;
    cout << a1 << " , " << b1 << ", " << c1 << endl;
    swap(&a1,&b1,&c1);
    cout << a1 << " , " << b1 << ", " << c1 << endl;		


cout << endl << "======== Account Manager Test ========" << endl;
    

//Savings Test
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

return 0;
}


//Reference Func
  
  
  void swap(double &a1, double &b1, double &c1)
  {
      double d1;
      d1=a1;
      a1=b1;
      b1=d1;
      return;
   
  }
 void swap(double *a1, double *b1, double *c1)
    {   
        double d1;
        d1=*a1;
        *a1=*b1;
        *b1=d1;
        return;
    }
