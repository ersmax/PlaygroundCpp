/*
Suppose savings and expenses are variables of type double that have been
given values. Write an if-else statement that outputs the word Solvent,
decreases the value of savings by the value of expenses, and sets the value
of expenses to zero provided that savings is at least as large as expenses.
If, however, savings is less than expenses, the if-else statement simply
outputs the word Bankrupt and does not change the value of any variables.
*/

#include <iostream>
using namespace std;

int main( ) {
    double savings, expenses;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Enter savings and expenses (separated by space):";
    cin >> savings >> expenses;

    if (savings >= expenses) {
        cout << "Solvent" << endl;
        savings -= expenses;  // Decrease savings by expenses
        cout << "Updated savings: " << savings << endl;
    } else
        cout << "Bankrupt" << endl;

    return 0;
}
