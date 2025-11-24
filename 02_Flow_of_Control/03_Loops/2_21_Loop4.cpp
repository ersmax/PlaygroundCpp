/*
What is the output of the following?
int n = 1;
do
cout << n << " ";
while (++n <= 3);
*/
#include <iostream>
using namespace std;

int main ( ) {
    int n = 1;
    do
        cout << n << " ";  // Outputs: 1 2 3
    while (++n <= 3);
    cout << endl;
    return 0;
}