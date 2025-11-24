// Illustrates overloading the function name average
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

double average(double n1, double n2);
// Precondition: n1 and n2 are defined
// Postcondition: returns the average of n1 and n2

double average(double n1, double n2, double n3);
// Precondition: n1, n2 and n3 are defined
// Postcondition: returns the average of n1, n2 and n3

int main( ) {
    // Prompts user for two or three numbers
    // and displays the average.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Average of 2 and 3 is "
         << average(2.0, 3.0) << endl;
    cout << "Average of 2, 3 and 4 is "
         << average(2.0, 3.0, 4.0) << endl;

    return 0;
}

double average(double n1, double n2) {
    return ((n1 + n2) / 2.0);
}

double average(double n1, double n2, double n3) {
    return ((n1 + n2 + n3) / 3.0);
}