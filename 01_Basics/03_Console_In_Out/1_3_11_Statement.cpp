/*
What statements should you include in your program to ensure that when a
number of type double is output, it will be output in ordinary notation with
three digits after the decimal point?
My answer:
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(3);
*/
#include <iostream>
using namespace std;

int main ( ) {

    // Set output formatting for floating-point numbers
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    double num = 123.456789;
    cout << num << endl; // Outputs: 123.457

    return 0;
}
