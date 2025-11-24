/*
What would be the output in Self-Test Exercise 12 if the assignment were
changed to the following?
int extra = 0;
*/
#include <iostream>
using namespace std;

int main ( ) {
    int extra = 0;

    if (extra < 0)
        cout << "small";
    else if (extra == 0)
        cout << "medium";
    else
        cout << "large";

    return 0;
}

// Output: medium
// Explanation: The variable `extra` is initialized to 0.
// The first condition `extra < 0` is false,
// so the program checks the next condition `extra == 0`, which is true.
// Therefore, it outputs "medium".