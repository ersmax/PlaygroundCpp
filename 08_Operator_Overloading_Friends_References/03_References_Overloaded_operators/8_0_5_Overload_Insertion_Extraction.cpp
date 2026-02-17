//   This program showcases the overloading of insertion and extraction operators,
// so that it is possible to print and insert input with std::cout instead of
// invoking specific input or output member functions of the class.

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

	friend std::ostream& operator <<(std::ostream& outputStream, const Money& amount);
	//   Precondition: outputStream is an output stream and amount is a Money object.
	// Since << is not a member operator, we need to specify a calling object for member functions and variables of Money
	// for instance, amount.dollars and amount.cents. This is done by declaring operator << as a friend function of Money.
	// This is allowed by passing amount as a parameter. The parameter is passed by constant reference to avoid copying, 
	// while avoiding changes to the object amount.
	//    Postcondition: Returns the output stream with amount inserted into it, extracted from the object amount.

	friend std::istream& operator >>(std::istream& inputStream, Money& amount);
	//   Precondition: inputStream is an input stream and amount is a Money object.
	// As before, the >> operator is not a member function, so we need to specify a calling object 
	// for member functions and variables of Money, for instance amount.dollarsPart(amountAsDouble) 
	// and amount.centsPart(amountAsDouble). This is done by declaring operator >> as a friend function of Money.
	// This is allowed by passing amount as parameter. The parameter is passed by reference to avoid copying.	
	//   Postcondition: Returns the input stream with amount extracted from it and stored in the object amount.

	friend const Money operator +(const Money& firstOperand, const Money& secondOperand);
	//   Postcondition: Returns the sum of calling object's and amount2's member values.
	// This is an overload of the binary - operator. The parameter is passed by reference to avoid copying.

	friend const Money operator -(const Money& firstOperand, const Money& secondOperand);
	//   Postcondition: Returns the difference of calling object's and secondOperand's member values.

	friend bool operator ==(const Money& firstOperand, const Money& secondOperand);
	//   Postcondition: Returns true if calling object's and secondOperand's member values are equal, false otherwise.

	friend const Money operator -(const Money& firstOperand);
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

int main()
{
	const Money baseAmount(100, 60);
	// 24 is converted into object Money with dollars: 24, cents: 0
	const Money fullAmount = baseAmount + 24.40;
	std::cout << fullAmount << '\n';

	const Money fullAmount2 = 24.40 + baseAmount;
	std::cout << fullAmount2 << '\n';

	Money yourAmount, myAmount(-10, -9);
	std::cout << "Enter an amount of money:\n";
	std::cin >> yourAmount;
	std::cout << "Your amount is: " << yourAmount << '\n';
	std::cout << "My amount is: " << myAmount << '\n';

	if (yourAmount == myAmount)
		std::cout << "We have the same amounts\n";
	else
		std::cout << "One of us is richer\n";

	Money ourAmount = yourAmount + myAmount;
	std::cout << yourAmount << " + " << myAmount << " equals " << ourAmount << '\n';

	Money diffAmount = yourAmount - myAmount;
	std::cout << yourAmount << " - " << myAmount << " equals " << diffAmount << '\n';

	std::cout << '\n';
	return 0;
}

std::ostream& operator <<(std::ostream& outputStream, const Money& amount)
{
	int absDollars = std::abs(amount.dollars);
	int absCents = std::abs(amount.cents);
	if (amount.dollars < 0 || amount.cents < 0)
		outputStream << "-$ ";
	else
		outputStream << "$ ";
	
	outputStream << absDollars;
	if (absCents >= 10)
		outputStream << '.' << absCents;
	else
		outputStream << ".0" << absCents;

	return outputStream;
}

//void Money::output() const
//{
//	int absDollar = std::abs(dollars);
//	int absCents = std::abs(cents);
//	if (dollars < 0 || cents < 0)
//		std::cout << "-$ ";
//	else
//		std::cout << "$ ";
//
//	std::cout << absDollar;
//	if (absCents >= 10)
//		std::cout << '.' << absCents;
//	else
//		std::cout << ".0" << absCents;
//}

std::istream& operator >>(std::istream& inputStream, Money& amount)
{
	char dollarSign;
	inputStream >> dollarSign;
	if (dollarSign != '$')
	{
		std::cout << "No dollar sign in Money input\n";
		std::exit(-1);
	}
	double amountAsDouble;
	inputStream >> amountAsDouble;
	amount.dollars = amount.dollarsPart(amountAsDouble);
	amount.cents = amount.centsPart(amountAsDouble);

	return inputStream;
}

//void Money::input()
//{
//	char dollarSign;
//	std::cin >> dollarSign;
//	if (dollarSign != '$')
//	{
//		std::cout << "No dollar sign in Money input\n";
//		std::exit(-1);
//	}
//	double amountAsDouble;
//	std::cin >> amountAsDouble;
//	dollars = dollarsPart(amountAsDouble);
//	cents = centsPart(amountAsDouble);
//}

const Money operator +(const Money& firstOperand, const Money& secondOperand)
{
	const int allCents1 = firstOperand.cents + firstOperand.dollars * 100;
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

const Money operator -(const Money& firstOperand, const Money& secondOperand)
{
	const int allCents1 = firstOperand.cents + firstOperand.dollars * 100;
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

bool operator ==(const Money& firstOperand, const Money& secondOperand)
{
	return ((firstOperand.cents == secondOperand.cents) &&
		(firstOperand.dollars == secondOperand.dollars));
}

const Money operator -(const Money& firstOperand)
{
	return Money(-firstOperand.dollars, -firstOperand.cents);
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

int Money::dollarsPart(const double amount) const
{
	return static_cast<int>(amount);
}

int Money::centsPart(const double amount) const
{
	double doubleCents = amount * 100;
	int intCents = round(std::fabs(doubleCents)) % 100;
	if (amount < 0)
		intCents = -intCents;
	return intCents;
}

int Money::round(const double number) const
{
	return static_cast<int>(std::floor(number + 0.5));
}
