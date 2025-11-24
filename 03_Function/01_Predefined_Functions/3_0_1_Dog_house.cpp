/*
 * Compute the size of a doghouse that can be purchased
 * given the user's budget.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main ( ) {
    constexpr double COST_PER_SQ_MT = 10.50;
    double budget;

    cout << "Enter the amount budgeted for your doghouse $";
    cin >> budget;

    double area = budget / COST_PER_SQ_MT;
    double lengthSide = sqrt(area);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For a price of $" << budget << endl
         << "I can build you a luxurious square doghouse\n"
         << "that is " << lengthSide
         << " metres on each side.\n";

    return 0;
}