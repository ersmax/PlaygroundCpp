/*
What is the output produced by the following? (x is of type int.)
int x = 10;
while (x > 0)
{
cout << x << endl;
x = x − 3;
}
*/
#include <iostream>
using namespace std;

int main ( ) {
    int x = 10;
    while (x > 0) {
        cout << x << endl;
        x = x - 3;
    }
    return 0;
}
// Output:
// 10
// 7
// 4
// 1
