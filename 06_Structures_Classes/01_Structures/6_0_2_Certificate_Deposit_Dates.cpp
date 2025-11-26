//  This program demonstrates the use of Hierarchical Structures 
//  in a banking programme that computes interests on a bank 
//  certificate deposit that does not allow withdrawals.

#include <iomanip>
#include <iostream>

struct Date
{
	int month;
	int day;
	int year;
};

struct CDAccount
{
	double initialBalance;
	double interestRate;
	int term;				// months til maturity
	Date maturity;			// day when CD matures
	double balanceAtMaturity;
};

void getCDData(CDAccount& theAccount);
//   Postcondition: theAccount.initialBalance, theAccount.interestRate,
// theAccount.term, theAccount.maturity, have been given values that
// the user entered in console input.

void getDate(Date& theDate);
//   Postcondition: theDate.month, theDate.day, theDate.year have 
// been given values that the user entered at the keyboard.

int main() 
{
	CDAccount account;
	std::cout << "Enter account data on the day the account was opened:\n";
	getCDData(account);

	const double rateFraction = account.interestRate / 100.0;
	const double interest = account.initialBalance * (rateFraction * (account.term / 12.0));
	account.balanceAtMaturity = account.initialBalance + interest;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "When CD matured on "
		<< account.maturity.day << "-" << account.maturity.month << "-"
		<< account.maturity.year << "\n"
		<< "it had a balance of $" << account.balanceAtMaturity << "\n";

	std::cout << "\n";
	return 0;
}

void getCDData(CDAccount& theAccount)
{
	std::cout << "Enter the account initial balance: $";
	std::cin >> theAccount.initialBalance;
	std::cout << "Enter account interest rate: ";
	std::cin >> theAccount.interestRate;
	std::cout << "Enter the number of months until maturity: ";
	std::cin >> theAccount.term;
	std::cout << "Enter the maturity date:\n";
	getDate(theAccount.maturity);
}

void getDate(Date& theDate)
{
	std::cout << "Enter month: ";
	std::cin >> theDate.month;
	std::cout << "Enter day: ";
	std::cin >> theDate.day;
	std::cout << "Enter year: ";
	std::cin >> theDate.year;
}
