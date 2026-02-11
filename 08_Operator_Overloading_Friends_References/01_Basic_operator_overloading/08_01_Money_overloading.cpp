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

Money operator +(Money amount1, Money amount2);

Money operator -(Money amount1, Money amount2);

bool operator ==(Money amount1, Money amount2);

Money operator -(Money amount);

int main( )
{
	Money yourAmount, myAmount(10, 9);
	std::cout << "Enter an amount of money:\n";
	yourAmount.input();
	std::cout << "Your amount is: ";
	yourAmount.output();
	std::cout << '\n';
	std::cout << "My amount is: ";
	myAmount.output();
	std::cout << '\n';

	if (yourAmount == myAmount)
		std::cout << "We have the same amounts\n";
	else
		std::cout << "One of us is richer\n";

	Money ourAmount = yourAmount + myAmount;
	yourAmount.output(); std::cout << " + "; myAmount.output();
	std::cout << " equals "; ourAmount.output(); std::cout << '\n';

	Money diffAmount = yourAmount - myAmount;
	yourAmount.output(); std::cout << " - "; myAmount.output();
	std::cout << " equals "; diffAmount.output(); std::cout << '\n';

	return 0;
}

Money::Money() : dollars(0), cents(0)
{}

Money::Money(double amount) : dollars(dollarsPart(amount)), cents(centsPart(amount))
{}

Money::Money(int theDollars) : dollars(theDollars), cents(0)
{}

Money::Money(int theDollars, int theCents)
{
	if ((theDollars > 0 && theCents < 0) ||
		(theDollars < 0 && theCents > 0))
	{
		std::cout << "Inconsistent money data.\n";
		std::exit(-1);
	}
	dollars = theDollars;
	cents = theCents;
}

double Money::getAmount() const
{
	return (dollars + cents * 0.01);
}

int Money::getDollars() const
{
	return dollars;
}

int Money::getCents() const
{
	return cents;
}

void Money::output() const
{
	int absDollar = std::abs(dollars);
	int absCents = std::abs(cents);
	if (dollars < 0 || cents < 0)
		std::cout << "-$ ";
	else
		std::cout << "$ ";
	
	std::cout << absDollar;
	if (absCents >= 10)
		std::cout << '.' << absCents;
	else
		std::cout << ".0" << absCents;
}

void Money::input()
{
	char dollarSign;
	std::cin >> dollarSign;
	if (dollarSign != '$')
	{
		std::cout << "No dollar sign in Money input\n";
		std::exit(-1);
	}
	double amountAsDouble;
	std::cin >> amountAsDouble;
	dollars = dollarsPart(amountAsDouble);
	cents = centsPart(amountAsDouble);
}

int Money::dollarsPart(double amount) const
{
	return static_cast<int>(amount);
}

int Money::centsPart(double amount) const
{
	double doubleCents = amount * 100;
	int intCents = round(std::fabs(doubleCents)) % 100;
	if (amount < 0)
		intCents = -intCents;
	return intCents;
}

int Money::round(double number) const
{
	return static_cast<int>(std::floor(number + 0.5));
}
