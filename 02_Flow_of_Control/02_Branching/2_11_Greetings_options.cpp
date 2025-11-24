/*
What output will be produced by the following code?
int x = 2;
cout << "Start\n";
if (x <= 3)
if (x != 0)
cout << "Hello from the second if.\n";
else
cout << "Hello from the else.\n";
cout << "End\n";
cout << "Start again\n";
if (x > 3)
if (x != 0)
cout << "Hello from the second if.\n";
else
cout << "Hello from the else.\n";
cout << "End again\n";
*/
#include <iostream>
using namespace std;

int main ( ) {
    int x = 2;
    cout << "Start\n";
    if (x <= 3)
        if (x != 0)
            cout << "Hello from the second if.\n";
        else
            cout << "Hello from the else.\n";
    cout << "End\n";

    cout << "Start again\n";
    if (x > 3)
        if (x != 0)
            cout << "Hello from the second if.\n";
        else
            cout << "Hello from the else.\n";
    cout << "End again\n";

    return 0;
}
// Output:
// Start
// Hello from the second if.
// End
// Start again
// End again
