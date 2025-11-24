#include <iostream>
using namespace std;

int main ( ) {
    // Set output formatting for floating-point numbers
    cout.setf(ios::fixed),
    cout.setf(ios::showpoint),
    cout.precision(2);

    double x = 1.2, y = 2.3;
    cout << x << " " << y << endl;

    // Change output formatting for floating-point numbers
    cout.precision(3);

    cout << x << " " << y << endl;

    return 0;
}
