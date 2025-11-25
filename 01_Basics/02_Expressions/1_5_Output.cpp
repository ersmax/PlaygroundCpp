/*
What is the output of the following program lines when they are embedded in a
correct program that declares all variables to be of type char?
a = 'b';
b = 'c';
c = a;
cout << a << b << c << 'c';
*/
#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    a = 'b';
    b = 'c';
    c = a;                              // c now holds 'b'
    cout << a << b << c << 'c' << endl; // Output: bcbc
    return 0;
}
