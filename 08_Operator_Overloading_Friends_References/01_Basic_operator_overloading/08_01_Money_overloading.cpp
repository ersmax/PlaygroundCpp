// This program showcases the overloading of + and == in member functions

#include <iostream>
#include <cstdlib>
#include <cmath>

class Money
{
public:
	Money();
	Money(double amount);
	Money(int theDollars);
	Money(int theDollars, int theCents);
	double getAmount() const;
	int getDollars() const;
	int getCents() const;
	void input();
	//  Postcondition: Reads the dollar sign and the amount number
	void output() const;
private:
	//  A negative amount is represented as negative dollars and 
	// negative cents. -$4.50 is represented as -4 and -50.
	int dollars;
	int cents;
	int dollarsPart(double amount) const;
	int centsPart(double amount) const;
	int round(double number) const;
};

int main( )
{
	
	return 0;
}

Money::Money() : dollars(0), cents(0)
{}

Money::Money(double amount) : dollars(dollarsPart(amount), cents(centsPart(amount)))
{}

Money::Money(int theDollars) : dollars(theDollars), cents(0)
{}

