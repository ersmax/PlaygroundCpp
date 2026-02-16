// Complete the definition of the friend subtraction operator - in Display 8.0.4

#include <iostream>
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
	friend const Money operator -(const Money& firstOperand, const Money& secondOperand);
	//   Postcondition: Returns the difference of calling object's and secondOperand's member values.
private:
	//  A negative amount is represented as negative dollars and 
	// negative cents. -$4.50 is represented as -4 and -50.
	int dollars;
	int cents;
	int dollarsPart(double amount) const;
	//   Postcondition: Returns the dollar part of amount.

	int centsPart(double amount) const;
	//   Postcondition: Returns the cents part of amount. 

	int round(double number) const;
};

int main( )
{
	(100 - Money(100, 0)).output();
	std::cout << '\n';
	return 0;
}

const Money operator - (const Money& amount1, const Money& amount2)
{
	int totalCents1 = amount1.cents + amount1.dollars * 100;
	int totalCents2 = amount2.cents + amount2.dollars * 100;
	int total = totalCents1 - totalCents2;
	int absCents = std::abs(total);
	int totalDollars = absCents / 100;
	int totalCents = absCents % 100;
	if (total < 0)
	{
		totalDollars = -totalDollars;
		totalCents = -totalCents;
	}
	return Money(totalDollars, totalCents);
}

Money::Money() : dollars(0), cents(0)
{
}

Money::Money(double amount) : dollars(dollarsPart(amount)), cents(centsPart(amount))
{
}

Money::Money(int theDollars) : dollars(theDollars), cents(0)
{
}

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


