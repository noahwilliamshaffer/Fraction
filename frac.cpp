//--------------- FRAC.CPP ---------------
// yadda yadda
// The class definition for fractions.

#include <iostream>
#include "frac.h"

using namespace std;

Fraction operator+(Fraction f1, Fraction f2)
{
   cout << "Building result fraction" << endl;
   Fraction r;
   r.numerator = (f1.numerator * f2.denominator)
		  + (f2.numerator * f1.denominator);
   r.denominator = f1.denominator * f2.denominator;

   cout << "Returning result fraction" << endl;;
   return r;
}

Fraction::Fraction()
// Another constructor. If no arguments specified, default to 0/1. 
{
   cout << "Running default constructor" << endl;
   numerator = 0; 
   denominator = 1;
}

Fraction::Fraction(int n, int d)
{
   cout << "Running constructor with 2 parameters" << endl;
   numerator = n;
   denominator = d;
}

Fraction::Fraction(const Fraction & f)
// copy constructor for Fraction class.  This does the same as the
//  automatic version
{
   cout << "Running COPY CONSTRUCTOR: " << endl;
   numerator = f.numerator;
   denominator = f.denominator;
}

Fraction& Fraction::operator= (const Fraction & f)
// assigment operator for fraction class (this will do basically 
//  the same as the automatic version)
{
  cout << "Running assignment operator" << endl;
  numerator = f.numerator;
  denominator = f.denominator;

  return *this;		// return this object itself
}

void Fraction::Input()
// Get a fraction from standard input, in the form "numerator/denominator."
{
   char divSign;	// used to consume the '/' character during input
   cin >> numerator >> divSign >> denominator;
}

void Fraction::Show()
// Display a fraction, in the form "numerator/denominator."
{
   cout << numerator << '/' << denominator;
}

double Fraction::Evaluate()
// Calculates and returns the decimal value of a fraction
{
   double n = numerator;		// convert numerator to double
   double d = denominator;		// convert denominator to double
   return (n / d);			// compute and return float representation
}
