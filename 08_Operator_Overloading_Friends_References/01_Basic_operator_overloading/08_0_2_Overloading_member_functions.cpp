//   This program showcases the overloading of +, - and == operator as member functions
// This allows for a better object-oriented programming, since the definition 
// of member functions can reference directly the member variables of the calling object
// and need not use accessor and mutator function (get, set, etc.).

//   The main difference between overloading operator and overloading operator as a member 
// function is that operator defined inside a class need not using setters and getters 
// to access/change member variables, as opposed to overload operator outside the class.
// This is because when we define an overloaded operator as a member function of a class, 
// that function has access to the private members of ALL objects of that same class type, 
// not just the calling object.

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
	
	const Money operator +(const Money& secondOperand) const;
	//   Postcondition: Returns the sum of calling object's and amount2's member values.
	// This is an overload of the binary - operator. The parameter is passed by reference to avoid copying.

	const Money operator -(const Money& secondOperand) const;
	//   Postcondition: Returns the difference of calling object's and secondOperand's member values.

	bool operator ==(const Money& secondOperand) const;
	//   Postcondition: Returns true if calling object's and secondOperand's member values are equal, false otherwise.

	const Money operator -() const;
	//   Postcondition: Returns an object that has opposite sign of the calling object's member values.
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

const Money operator -(const Money& amount);
//   Postcondition: Returns the negative of amount.
// This is an overload of the unary - operator. The parameter is passed by reference to avoid copying.

int main()
{
	Money yourAmount, myAmount(-10, -9);
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

const Money Money::operator +(const Money& secondOperand) const
{
	const int allCents1 = cents + dollars * 100;
	const int allCents2 = secondOperand.cents + secondOperand.dollars * 100;
	const int sumCents = allCents1 + allCents2;
	const int absSumCents = std::abs(sumCents);
	int totalDollars = absSumCents / 100;
	int totalCents = absSumCents % 100;
	if (sumCents < 0)
	{
		totalDollars = -totalDollars;
		totalCents = -totalCents;
	}
	return Money(totalDollars, totalCents);
}

const Money Money::operator -(const Money& secondOperand) const
{
	const int allCents1 = cents + dollars * 100;
	const int allCents2 = secondOperand.cents + secondOperand.dollars * 100;
	const int allCents = allCents1 - allCents2;
	int absAllCents = std::abs(allCents);
	int totalDollar = allCents / 100;
	int totalCents = allCents % 100;
	if (allCents < 0)
	{
		totalDollar = -totalDollar;
		totalCents = -totalCents;
	}
	return Money(totalDollar, totalCents);
}

bool Money::operator ==(const Money& secondOperand) const
{
	return ((cents == secondOperand.cents) &&
			(dollars == secondOperand.dollars));
}

const Money Money::operator -( ) const
{
	return Money(-dollars, -cents);
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
