/*
What is the output of the following? Explain your answers.
a. if(0)
cout << "0 is true";
else
cout << "0 is false";
cout << endl;
b. if(1)
cout << "1 is true";
else
cout << "1 is false";
cout << endl;
c. if(-1)
cout << "-1 is true";
else
cout << "-1 is false";
cout << endl;
*/
#include <iostream>
using namespace std;

int main ( ) {
    // Explanation:
    // In C++, the condition in an if statement evaluates to true if it is non-zero,
    // and false if it is zero. Therefore:
    // a. 0 evaluates to false, so the else branch executes.
    // b. 1 evaluates to true, so the if branch executes.
    // c. -1 (or any non-zero value) evaluates to true, so the if branch executes.

    // a.
    if(0)
        cout << "0 is true\n";
    else
        cout << "0 is false\n";

    // b.
    if(1)
        cout << "1 is true\n";
    else
        cout << "1 is false\n";

    // c.
    if(-1)
        cout << "-1 is true\n";
    else
        cout << "-1 is false\n";

    return 0;
}

