//  This program describes the use of constructors in a bank account 
// that computes interest and keep track of the amount with separate
// variables for dollars and cents.

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
	int digitToInt(char digit);
	//   Precondition: digit is a valid char
	//   Postcondition: return the digit value of `digit`
	bool isLarger(const BankAccount& account1, const BankAccount& account2);
	//   Precondition: account1 and account2 are two valid accounts
	//   Postcondition: return true if account1 balance is greater than account2 balance
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
	//   Postcondition: convert a percent to a fraction.
	// For instance, fraction(50.3) returns 0.503
};

int main( )
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

	if (account1.isLarger(account1, account2))
		std::cout << "account1 has greater balance\n";
	else
		std::cout << "account2 has greater balance\n";

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
{ /* Body intentionally empty */ }


bool BankAccount::isLarger(const BankAccount& account1, const BankAccount& account2)
{
	return (account1.getBalance() > account2.getBalance());
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
	double balanceAsDouble;
	std::cout << "Enter account balance: $";
	std::cin >> balanceAsDouble;
	accountDollars = dollarsPart(balanceAsDouble);
	accountCents = centsPart(balanceAsDouble);
	std::cout << "Enter interest rate (No percent sign): ";
	std::cin >> rate;
	setRate(rate);
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
