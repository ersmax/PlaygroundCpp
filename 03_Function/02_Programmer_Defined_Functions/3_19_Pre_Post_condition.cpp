/*
Give a precondition and a postcondition for the predefined function sqrt,
which returns the square root of its argument.
*/
#include <iostream>
#include <cmath>
using namespace std;

double sqrt_number(int number);
// Precondition: number is greater than or equal to 0.
// Postcondition: returns the square root of number.
void showResult(double result);
// Precondition: the result is a double value.
// Postcondition: print the result to the console with fixed decimals

int main ( ) {
    int n;

    cout << "Insert a number:";
    cin >> n;

    if (n < 0)
        cout << "Error: negative input for square root.\n";
    else
        showResult(sqrt_number(n));

    return 0;
}

double sqrt_number(int number) {
    return sqrt(number);
}

void showResult(double result) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The result is: " << result << endl;
}

