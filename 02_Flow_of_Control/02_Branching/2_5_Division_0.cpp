/*
Does the following sequence produce division by zero?
j = −1;
if ((j > 0) && (1/(j + 1) > 10))
cout << i << endl;
*/

#include <iostream>
using namespace std;

int main ( ) {
    int j = -1;
    if ((j > 0) && (1/(j + 1) > 10)) // Short-circuit prevents division by zero
        cout << j << endl;
    else
        cout << "No division by zero occurred: short-circuit" << endl;
    return 0;
}