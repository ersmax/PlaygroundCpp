// Suppose you have two function definitions with the following declarations:
// double score(double time, double distance);
// int score(double points);
// Which function definition would be used in the following function call and why
// would it be the one used? (x is of type double.)
// double finalScore = score(x);

// Answer:
// The function definition that would be used in the function call `double finalScore = score(x);` is:
// int score(double points);
// This is because the function call provides a single argument of type double (x).
// The first function definition, `double score(double time, double distance);`, requires two arguments
// (time and distance), so it cannot be matched with the single argument provided in the call
// Type coercion applies when the function returns the value int, which is then implicitly converted
// to double to match the type of finalScore (e.g. 2 becomes 2.0).
// So we have type coercion from int to double in the return value.

// In addition, function `score` is not overloaded because the return type of a function is not considered,
// and also references & are not considered in function overloading.
// Only the number and types of parameters are considered for function overloading.

#include <iostream>
using std::cout;
using std::endl;

double score(double time, double distance);

int score(double points);

int main( ) {
    double x = 2.5;
    double finalScore = score(x);
    cout << "Final score is " << finalScore << endl;
    return 0;
}

double score(double time, double distance) {
    return (distance / time);
}

int score(double points) {
    cout << "score(double points) is called.\n";
    return (points);
}