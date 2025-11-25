/*
Convert each of the following mathematical formulas to a C++ expression.
3x
3x + y
(x + y)/7
(3x + y)/(z + 2)
*/

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "value of x: ";
    cin >> x;
    double res1 = 3 * x;
    cout << "3x = " << res1 << endl;

    int y;
    cout << "value of y: ";
    cin >> y;
    double res2 = 3 * x + y;
    cout << "3x + y = " << res2 << endl;

    double res3 = (x + y) / 7.0;                // Use 7.0 to ensure floating-point division
    cout << "(x + y)/7 = " << res3 << endl;

    int z;
    cout << "value of z: ";
    cin >> z;
    double res4 = (3 * x + y) / (z + 2.0);      // Use 2.0 to ensure floating-point division
    cout << "(3x + y)/(z + 2) = " << res4 << endl;

    return 0;
}