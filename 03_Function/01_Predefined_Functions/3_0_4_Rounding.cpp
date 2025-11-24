#include <iostream>
#include <cmath>
using namespace std;

int rounding(double n);
// return the nearest rounded integer

int main ( ) {
    double number;
    char answer;

    do {
        cout  << "Enter a double number:";
        cin >> number;
        cout << "The rounded number is: "
             << rounding(number) << endl
             << "Continue? (y/Y = Yes):";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    cout << "End of testing.\n";

    return 0;
}

// uses cmath
int rounding(double n) {
    return static_cast<int>(floor(n + 0.5));
}