/*
What would be the output in Self-Test Exercise 12 if the assignment were
changed to the following?
int extra = −37;
*/
#include <iostream>
using namespace std;

int main ( ) {
    int extra = -37;
    if (extra <0)
        cout << "small";
    else if (extra == 0)
        cout << "medium";
    else
        cout << "large";
    return 0;
}
// Output: small
// Explanation: Since the variable `extra` is assigned the value -37, which is less
// than 0, the condition `extra < 0` evaluates to true. Therefore,
// the program executes the first branch of the if-else statement and outputs "small".
