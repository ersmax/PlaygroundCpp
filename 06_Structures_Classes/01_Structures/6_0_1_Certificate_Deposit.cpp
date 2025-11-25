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
