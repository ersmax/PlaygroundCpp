/*
    Suppose you have two function definitions with the following declarations:
    double theAnswer(double data1, double data2);
    double theAnswer(double time, int count);
    Which function definition would be used in the following function call and why
    would it be the one used? (x and y are of type double.)
    x = theAnswer(y, 6.0);
*/

/*
 * Answer:
 * double theAnswer(double data1, double data2); is called because the arguments
 * passed (y and 6.0) are both of type double, which matches the parameter types
 * of the first function declaration.
 * This is proper overloading because return type of theAnswer is the same for both
 * functions, and the parameter lists are different.
 */

#include <iostream>
using std::cout;
using std::endl;

double theAnswer(double data1, double data2);

double theAnswer(double time, int count);

int main( ) {
    double x, y = 15.0;
    x = theAnswer(y, 6.0);
    return 0;
}

double theAnswer(double data1, double data2) {
    cout << "theAnswer(double, double) is called.\n";
    return 0;
}

double theAnswer(double time, int count) {
    return 0;
}

