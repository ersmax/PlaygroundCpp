/*
What output will be produced by the following code?
int extra = 2;
if (extra < 0)
cout << "small";
else if (extra = = 0)
cout << "medium";
else
cout << "large";
*/
#include <iostream>
using namespace std;

int main ( ) {
    int extra = 2;
    if (extra < 0)
        cout << "small" << endl;
    else if (extra == 0)
        cout << "medium" << endl;
    else
        cout << "large" << endl; // Outputs: large
    return 0;
}
// Explanation:
// The variable `extra` is initialized to 2.
// The first condition `extra < 0` is false, so it moves to the `else if`
// condition `extra == 0`, which is also false.
// Since both conditions are false, it executes the `else` block,
// outputting "large".