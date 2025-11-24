/*
Write a complete C++ program to compute and output the square roots of the
whole numbers 1 to 10.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main( ) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    for (int num = 1; num < 11; ++num)
        cout << "Square root of "
            << num << ": " << sqrt(num) << endl;

    return 0;
}