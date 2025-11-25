/*
Given the following fragment that purports to convert from degrees Celsius to
degrees Fahrenheit, answer the following questions:
double c = 20;
double f;
f = (9/5) * c + 32.0;
a. What value is assigned to f?
b. Explain what is actually happening, and what the programmer likely wanted.
c. Rewrite the code as the programmer intended.
*/
#include <iostream>
using namespace std;

int main( ) {
    double c = 20;
    double f;
    f = (9/5) * c + 32.5;                   // Integer division occurs here
    cout << "Value of f: " << f << endl;    // Output: Value of f: 52.5
    // Explanation:
    // a. The value assigned to f is 52.0.
    // b. The expression (9/5) performs integer division, which results in 1,
    //    because both 9 and 5 are integers. The programmer likely intended
    //    to perform floating-point division to get a more accurate conversion.
    // c. Corrected code:
    f = (9/5.0) * c + 32.5;
    cout << "Corrected value of f: " << f << endl; // Output: Corrected value of f: 68.5
    return 0;
}
