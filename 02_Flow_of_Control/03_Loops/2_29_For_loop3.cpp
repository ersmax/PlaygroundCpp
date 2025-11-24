/*
What is the output of the following (when embedded in a complete program)?
for (double sample = 2; sample > 0; sample = sample − 0.5)
cout << sample << " ";
*/

#include <iostream>
using namespace std;

int main ( ) {
    for (double sample = 2; sample > 0; sample = sample - 0.5)
        cout << sample << " "; // Outputs: 2 1.5 1 0.5
    return 0;
}
