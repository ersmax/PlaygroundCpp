/*
Write a complete C++ program that reads two whole numbers into two variables
of type int and then outputs both the whole number part and the remainder
when the first number is divided by the second. This can be done using the
operators / and %.
*/
#include <iostream>
using namespace std;

int main( ) {
    int num1, num2;

    cout << "Enter two whole numbers (integers) ";
    cin >> num1 >> num2;

    int wholePart = num1 / num2;
    int remainder = num1 % num2;
    cout << num1 << " divided by " << num2 << " is "
         << wholePart << " with a remainder of " << remainder << endl;

    return 0;
}
