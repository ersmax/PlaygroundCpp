/*
Convert each of the following mathematical expressions to a C++ arithmetic
expression.
a. 1x + y b. x y + 7 c. 1area + fudge
d. sqrt(time + tide)/nobody
e. -b +- sqrt( 2b2 - 4ac) / 2a
f. | x — y |
*/
#include <iostream>
#include <cmath>
using namespace std;

int main ( ) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // a
    int x = 3, y = 2;
    double a = sqrt(x+y);
    cout << a;
    // b
    double b = pow(x, y + 7);
    cout << b;
    // c
    int area = 2, fudge = 3;
    double c = sqrt(area+fudge);
    cout << c;
    // d
    int time = 1, tide = 2, nobody = 3;
    double d = sqrt(time + tide) / nobody;
    cout << d;
    // e
    double e1 = (-b - sqrt(pow(b, 2) - 4 * a * c) ) / (2 * a);
    double e2 = (-b + sqrt(pow(b, 2) - 4 * a * c) ) / (2 * a);
    cout << e1 << " " << e2;
    // f
    double f = fabs(x - y);
    cout << f;

    return 0;
}