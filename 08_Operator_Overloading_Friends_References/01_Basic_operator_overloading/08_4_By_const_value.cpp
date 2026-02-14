//Suppose you omit the const at the beginning of the declaration and definition
//of the overloaded plus operator for the class Money, so that the value is not
//returned by const value.Is the following legal ?
//Money m1(10.99), m2(23.57), m3(12.34);
//(m1 + m2) = m3;
//Is it legal if the definition of the class Money is as shown in Display 8.1, so that
//the plus operator returns its value by const value ?

//   Without returning a value as const, the assignment (m1 + m2) = m3 is legal,
// because it assigns to the anonymous object (m1 + m2) the value of member variables of object m3,
// whatever they are.
//   Returning by constant value in the overloaded operator + may not be legal,
// because the anonymous object (m1 + m2) cannot be changed in the values of its member variables.

//   Formally: 
//   If you omit the const at the beginning of the declaration and definition of the
// overloaded plus operator for the class Money, then the following is legal :
// (m1 + m2) = m3;
//   If the definition of the class Money is as shown in Display 8.1, so that the plus
// operator returns by const value, then it is not legal.

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
	//   Postcondition: Returns the dollar part of amount.

	int centsPart(double amount) const;
	//   Postcondition: Returns the cents part of amount. 

	int round(double number) const;
};

Money operator +(const Money& amount1, const Money& amount2);
//   Postcondition: Returns the sum of amount1 and amount2.
// This is an overload of the binary + operator. The parameters are passed by reference to avoid copying.

const Money operator -(const Money& amount1, const Money& amount2);
//   Postcondition: Returns the difference of amount1 and amount2.
// This is an overload of the binary - operator. The parameters are passed by reference to avoid copying.

bool operator ==(const Money& amount1, const Money& amount2);
//   Postcondition: Returns true if amount1 and amount2 are equal, false otherwise.
// This is an overload of the == operator. The parameters are passed by reference to avoid copying.

const Money operator -(const Money& amount);
//   Postcondition: Returns the negative of amount.
// This is an overload of the unary - operator. The parameter is passed by reference to avoid copying.

int main()
{
	Money m1(10.10), m2(23.10), m3(1.00);
	std::cout << "m1 ("; m1.output(); 
	std::cout << ") + m2 ("; m2.output();
	std::cout << ") gives "; (m1 + m2).output();
	std::cout << '\n';

	std::cout << "m1 ("; m1.output();
	std::cout << ") + m2 ("; m2.output();
	std::cout << ") = m3 ("; m3.output();
	std::cout << ") gives "; ((m1 + m2) = m3).output();
	std::cout << '\n';

	return 0;
}

Money operator +(const Money& amount1, const Money& amount2)
{
	int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
	int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
	int sumAllCents = allCents1 + allCents2;
	int absAllCents = std::abs(sumAllCents);
	int finalDollars = absAllCents / 100;
	int finalCents = absAllCents % 100;

	if (sumAllCents < 0)
	{
		finalDollars = -finalDollars;
		finalCents = -finalCents;
	}
	return Money(finalDollars, finalCents);
}

const Money operator -(const Money& amount1, const Money& amount2)
{
	int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
	int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
	int diffAllCents = allCents1 - allCents2;
	int absAllCents = std::abs(diffAllCents);
	int finalDollars = absAllCents / 100;
	int finalCents = absAllCents % 100;

	if (diffAllCents < 0)
	{
		finalDollars = -finalDollars;
		finalCents = -finalCents;
	}
	return Money(finalDollars, finalCents);
}

bool operator ==(const Money& amount1, const Money& amount2)
{
	return ((amount1.getDollars() == amount2.getDollars()) &&
		(amount1.getCents() == amount2.getCents()));
}

const Money operator -(const Money& amount)
{
	return Money(-amount.getDollars(), -amount.getCents());
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
