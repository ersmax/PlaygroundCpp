//  This program demonstrates the use of Struct in a banking programme
// that computes interests on a bank certificate deposit that does not
// allow withdrawals.

#include <iostream>
#include <iomanip>

struct CDAccountV1 
{
	double balance;
	double interestRate;
	int term;	// months until maturity

};

void getData(CDAccountV1& theAccount);
//   Postcondition: theAccount.balance, theAccount.interestRate, 
// theAccount.term have been given values that the user entered

CDAccountV1 doubleInterest(const CDAccountV1& oldAccount);
//   Precondition: oldAccount is a valid account whose member values
// have been defined.
//   Postcondition: Return a new account of type structure CDAccountV1
// with double interests

void showAccount(const CDAccountV1& account);
//   Precondition: account is a valid account whose member values
// have been defined.
//   Postcondition: show all the members values of account structure.

int main() 
{
	CDAccountV1 account;
	getData(account);

	const double rateFraction = account.interestRate / 100.0;
	const double interest = account.balance * (rateFraction * (account.term / 12.0));
	account.balance = account.balance + interest;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "When your Certificate Deposit matures in "
			  << account.term << " months, \n"
			  << "it will have a balance of &"
			  << account.balance << "\n";

	CDAccountV1 newAccount = doubleInterest(account);
	showAccount(newAccount);
	showAccount(account);

	std::cout << "\n";
	return 0;
}


void getData(CDAccountV1& theAccount)
{
	std::cout << "Enter account balance: $";
	std::cin >> theAccount.balance;
	std::cout << "Enter account interest: $";
	std::cin >> theAccount.interestRate;
	std::cout << "Enter the number of months until maturity: ";
	std::cin >> theAccount.term;
}

CDAccountV1 doubleInterest(const CDAccountV1& oldAccount)
{
	CDAccountV1 temp = oldAccount;
	temp.interestRate *= 2.0;
	return temp;
}

void showAccount(const CDAccountV1& account)
{
	std::cout << "Account interest rate: "
		<< account.interestRate << "\n";
}
