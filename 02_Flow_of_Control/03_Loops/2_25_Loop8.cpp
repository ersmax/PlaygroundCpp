/*
What is the output produced by the following? (x is of type int.)
int x = −42;
do
{
cout << x << endl;
x = x − 3;
} while (x > 0);
*/
#include <iostream>
using namespace std;

int main ( ) {
    int x = -42;
    do {
        cout << x << endl;
        x = x - 3;
    } while (x > 0);
    return 0;
}
// Output:
// -42