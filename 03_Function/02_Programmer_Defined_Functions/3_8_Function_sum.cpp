/*
Write a function declaration (function prototype) and a function definition for
a function that takes three arguments, all of type int, and that returns the sum
of its three arguments.
*/
#include <iostream>
using namespace std;

int sum(int x1, int x2, int x3);
// sum its 3 parameters

int main( ) {
    int num1 = 1, num2 = 3, num3 = 3;
    cout << "The sum of 3 arguments is: "
         << sum(num1, num2, num3)
         << endl;
    return 0;
}

int sum(int x1, int x2, int x3) {
    return (x1+x2+x3);
}