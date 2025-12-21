/*
The function BankAccount::input in Display 7.2 reads the balance of the
account as a value of type double. When the value is stored in the computer’s
memory in binary form, this can create a slight error. It would normally
not be noticed, and the function is good enough for the demonstration class
BankAccount. Spending too much time on numerical analysis would detract
from the message at hand. Still, this input function is not good enough for
banking. Rewrite the function BankAccount::input so it reads an amount
such as 78.96 as the int 76 and the three char values '.', '9', and '6'. You
can assume the user always enters two digits for the cents in an amount, such as
99.00 instead of just 99 and nothing more. Hint: The following formula will
convert a digit to the corresponding int value, such as '6' to 6:
static_cast<int>(digit) - static_cast<int>('0')
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

class BankAccount
{
public:
	BankAccount(double balance, double rate);
	//   Postcondition: Initialize amountDollars, amountCents 
	// and rate according to parameters
	BankAccount(int dollars, int cents, double rate);
	//   Precondition: For negative balance, both dollars and 
	// cents must be negative. Rate must be in percent value
	//   Postcondition: Initialize amountDollars, amountCents
	// and rate according to parameters.
	BankAccount(int dollars, double rate);
	//   Postcondition: Initialize amountDollars to dollars, and
	// amountCents to 0. Rate is set to parameter
	BankAccount();
	//   Postcondition: Initialize the balance to 0.00 and 
	// the interest rate to 0.0%.

	void update();
	//   Postcondition: Add one year of simple interest rate
	void input();
	void output();
	double getBalance() const;
	int getDollars() const;
	int getCents() const;
	double getRate() const;
	//   Postcondition: returns interest rate as percentage
	void setBalance(double balance);
	void setBalance(int dollars, int cents);
	//   Precondition: arguments are either both nonnegative 
	// or both nonpositive
	//   Postcondition: set the new balance
	void setRate(double newRate);
	//   Postcondition: if newRate is nonnegative, it becomes
	// the new rate. Else, abort the program.

private:
	//   A negative amount (such as -$ 9.83) is represented as
	// negative dollars (-9) and negative cents (-83).
	int accountDollars;
	int accountCents;
	double rate;	// as percent
	int dollarsPart(double amount);
	int centsPart(double amount);
	int round(double number);
	double fraction(double percent);
	int digitToInt(char digit);
	//   Postcondition: convert a percent to a fraction.
	// For instance, fraction(50.3) returns 0.503
};

int main()
{
	BankAccount account1(-0.109, 2.3);
	BankAccount account2;
	std::cout << "account1 initialized as follows:\n";
	account1.output();
	std::cout << "account2 initialized as follows:\n";
	account2.output();

	account1 = BankAccount(999, 99, 5.5); // explicit call to constructor
	std::cout << "account1 reset to the following:\n";
	account1.output();

	std::cout << "Enter new data for account2:\n";
	account2.input();
	std::cout << "account2 reset to the following:\n";
	account2.output();
	account2.update();
	std::cout << "In one year, account2 will grow to:\n";
	account2.output();

	std::cout << "\n";
	return 0;
}

BankAccount::BankAccount(const double balance, const double rate)
	: accountDollars(dollarsPart(balance)),
	accountCents(centsPart(balance))
{
	setRate(rate);
}

BankAccount::BankAccount(const int dollars, const int cents, const double rate)
{
	setBalance(dollars, cents);
	setRate(rate);
}

BankAccount::BankAccount(const int dollars, const double rate)
	: accountDollars(dollars), accountCents(0)
{
	setRate(rate);
}

BankAccount::BankAccount() : accountDollars(0), accountCents(0), rate(0.0)
{ /* Body intentionally empty */
}


int BankAccount::dollarsPart(const double amount)
{
	return static_cast<int>(amount);
}

int BankAccount::centsPart(const double amount)
{
	const double doubleCents = amount * 100;
	int intCents = static_cast<int>(std::round(std::fabs(doubleCents))) % 100;
	if (amount < 0)
		intCents = -intCents;
	return intCents;
}

void BankAccount::setRate(const double newRate)
{
	if (newRate >= 0.0)	rate = newRate;
	else
	{
		std::cerr << "Cannot have a negative rate\n";
		std::exit(-1);
	}
}

void BankAccount::setBalance(const double balance)
{
	accountDollars = dollarsPart(balance);
	accountCents = centsPart(balance);
}

void BankAccount::setBalance(const int dollars, const int cents)
{
	if ((dollars < 0 && cents > 0) || (dollars > 0 && cents < 0))
	{
		std::cerr << "Inconsistent account data.\n";
		std::exit(-1);
	}
	accountDollars = dollars;
	accountCents = cents;
}

void BankAccount::input()
{
	int dollars;
	char point, digit1, digit2;
	std::cout << "Enter account balance: $";
	std::cin >> dollars >> point >> digit1 >> digit2;
	accountDollars = dollars;
	accountCents = digitToInt(digit1) * 10 + digitToInt(digit2);

	if (accountDollars < 0)
		accountCents = -accountCents;

	std::cout << "Enter interest rate (No percent sign): ";
	std::cin >> rate;
	setRate(rate);
}

int BankAccount::digitToInt(const char digit)
{
	return (static_cast<int>(digit) - static_cast<int>('0'));
}


void BankAccount::output()
{
	int absDollars = std::abs(accountDollars);
	int absCents = std::abs(accountCents);
	std::cout << "Account balance: $";

	if (accountDollars < 0 || accountCents < 0)
		std::cout << "-";
	std::cout << absDollars;
	if (absCents >= 10)
		std::cout << "." << absCents << "\n";
	else
		std::cout << ".0" << absCents << "\n";
	std::cout << "Rate: " << rate << "%\n";
}

void BankAccount::update()
{
	double balance = accountDollars + accountCents * 0.01;
	balance = balance + fraction(rate) * balance;
	accountDollars = dollarsPart(balance);
	accountCents = centsPart(balance);
}

double BankAccount::fraction(const double percent)
{
	return (percent / 100.0);
}

int BankAccount::round(const double number)
{
	return static_cast<int>(std::floor(number + 0.5));
}

double BankAccount::getBalance() const
{
	return (accountDollars + accountCents * 0.01);
}

int BankAccount::getDollars() const
{
	return accountDollars;
}

int BankAccount::getCents() const
{
	return accountCents;
}

double BankAccount::getRate() const
{
	return rate;
}
