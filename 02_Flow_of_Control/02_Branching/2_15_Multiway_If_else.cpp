/*
Write a multiway if-else statement that classifies the value of an int variable
n into one of the following categories and writes out an appropriate message.
n < 0 or 0 … n … 100 or n > 100
*/

#include <iostream>
using namespace std;

int main ( ) {
    int n;

    cout << "Enter an integer n:";
    cin >> n;

    if (n < 0)
        cout << "n is negative" << endl;
    else if (n <= 100)
        cout << "n is between 0 and 100" << endl;
    else
        cout << "n is greater than 100" << endl;

    return 0;
}