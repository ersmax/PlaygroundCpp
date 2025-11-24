/*
Write a function declaration and a function definition for a function that takes
one argument of type double. The function returns the character value 'P' if
its argument is positive and returns 'N' if its argument is zero or negative.
*/
#include <iostream>
using namespace std;

char positiveNegative(double number);
// return P or N according to the parameter

int main( ) {
    int n;
    cout << "Insert a number:";
    cin >> n;
    cout << "And the output is: "
         << positiveNegative(n)
         << endl;
    return 0;
}

char positiveNegative(double number) {
    return (number > 0) ? 'P' : 'N';
}