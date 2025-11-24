/*
Rewrite the following loops as for loops.
a. int i = 1;
while(i <= 10)
{
if (i < 5 && i != 2)
cout << 'X';
i++;
}
b. int i = 1;
while(i <<= 10)
{
cout << 'X';
i = i + 3;
}
c. long n = 100;
do
{
cout 6 < 'X';
n = n + 100;
} while (n < 1000);
*/

#include <iostream>
using namespace std;

int main ( ) {
    // a
    for (int i = 1; i <= 10; ++i)
        if ( i < 5 && i != 2)
            cout << 'X';
    cout << endl;
    // b
    for (int i = 1; i <= 10; i += 3)
        cout << 'X';
    cout << endl;
    // c
    cout << 'X';
    for (long n = 200; n < 1000; n += 100)
        cout << 'X';
    cout << endl;

    return 0;
}
