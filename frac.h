//--------------- FRAC.H ---------------

class Fraction
{
   friend Fraction operator+(Fraction f1, Fraction f2);

public:
   Fraction();			// Set numerator = 0, denominator = 1.
   Fraction(int n, int d=1);	// constructor with parameters

   // here are declarations for the copy constructor and
   //  assignment operator.  Note that the automatic versions
   //  of these for the Fraction class are actually sufficient

   Fraction(const Fraction&);	
   Fraction& operator=(const Fraction &);

   // other member functions

   
   void Input();			// Get a fraction from keyboard.
   void Show();			// Display a fraction on screen

   double Evaluate();		// Return the decimal value of a fraction

private:
   int numerator;		// top part
   int denominator;		// bottom part
};
