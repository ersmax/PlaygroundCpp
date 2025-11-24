/*
What is the output produced by the following? (x is of type int.)
int x = 10;
do
{
cout << x << endl;
x = x − 3;
} while (x > 0);
*/
#include <iostream>
using namespace std;

int main ( ) {
    int x = 10;
    do {
        cout << x << endl;
        x = x - 3;
    } while (x > 0);        // 10 7 4 1

    return 0;
}