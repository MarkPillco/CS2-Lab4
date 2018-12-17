#include <iostream>
#include <sstream>
#include "Complex.h"
  using namespace std;
  
   
      //Addition
       Complex Complex::operator+(Complex &newnum)
      {
      Complex result;
      result.realpart= realpart+ newnum.realpart;
      result.imaginarypart= imaginarypart+newnum.imaginarypart;
      return result;
      }
  
      //Subtraction
       Complex Complex::operator-(Complex &newnum)
        {
        Complex result;
        result.realpart= realpart- newnum.realpart;
        result.imaginarypart= imaginarypart-newnum.imaginarypart;
        return result;

        }
  
     //Multiplication
      Complex Complex::operator*(Complex &newnum)
       {
       Complex result;
       result.realpart= realpart*newnum.realpart;
       result.imaginarypart= imaginarypart*newnum.imaginarypart;
       return result;

       }
  
  
    //Display
       string Complex::toString() const
       {
          ostringstream output;
          output << "(" << realpart << " , " << imaginarypart << ")" ;
       	  return output.str();
       }
	
      //Set

      void Complex::setComplexNumber(double rp, double ip)
      {
	realpart= rp;
	imaginarypart= ip ;
      }
