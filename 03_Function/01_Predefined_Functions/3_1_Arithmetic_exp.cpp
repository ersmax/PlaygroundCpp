/*
Determine the value of each of the following arithmetic expressions.
sqrt(16.0) sqrt(16) pow(2.0, 3.0)
pow(2, 3) pow(2.0, 3) pow(1.1, 2)
abs(3) abs(−3) abs(0)
fabs(−3.0) fabs(−3.5) fabs(3.5)
ceil(5.1) ceil(5.8) floor(5.1)
floor(5.8) pow(3.0, 2)/2.0 pow(3.0, 2)/2
7/abs(−2) (7 + sqrt(4.0))/3.0 sqrt(pow(3, 2))
*/
#include <iostream>
#include <cmath>
using namespace std;

int main ( ) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    cout << "sqrt(16.0) = " << sqrt(16.0) << endl;           // 4.0
    cout << "sqrt(16) = " << sqrt(16) << endl;               // 4.0, because sqrt returns double
    cout << "pow(2.0, 3.0) = " << pow(2.0, 3.0) << endl;     // 8.0
    cout << "pow(2, 3) = " << pow(2, 3) << endl;             // 8.0, because pow returns double
    cout << "pow(2.0, 3) = " << pow(2.0, 3) << endl;         // 8.0
    cout << "pow(1.1, 2) = " << pow(1.1, 2) << endl;         // 1.21
    cout << "abs(3) = " << abs(3) << endl;                   // 3, because abs returns int
    cout << "abs(-3) = " << abs(-3) << endl;                 // 3
    cout << "abs(0) = " << abs(0) << endl;                   // 0
    cout << "fabs(-3.0) = " << fabs(-3.0) << endl;           // 3.0, because fabs returns double
    cout << "fabs(-3.5) = " << fabs(-3.5) << endl;           // 3.5
    cout << "fabs(3.5) = " << fabs(3.5) << endl;             // 3.5
    cout << "ceil(5.1) = " << ceil(5.1) << endl;             // 6.0, because ceil returns double
    cout << "ceil(5.8) = " << ceil(5.8) << endl;             // 6.0
    cout << "floor(5.1) = " << floor(5.1) << endl;           // 5.0, because floor returns double
    cout << "floor(5.8) = " << floor(5.8) << endl;           // 5.0
    cout << "pow(3.0, 2)/2.0 = " << pow(3.0, 2)/2.0 << endl; // 4.5
    cout << "pow(3.0, 2)/2 = " << pow(3.0, 2)/2 << endl;     // 4.5
    cout << "7/abs(-2) = " << 7/abs(-2) << endl;             // 3, because of integer division
    cout << "(7 + sqrt(4.0))/3.0 = " << (7 + sqrt(4.0))/3.0 << endl; // 3.0, because of double division
    cout << "sqrt(pow(3, 2)) = " << sqrt(pow(3, 2)) << endl; // 3.0, because pow and sqrt return double
    return 0;
}