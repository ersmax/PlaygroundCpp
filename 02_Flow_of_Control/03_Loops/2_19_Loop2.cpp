/*
What is the output of the following?
int count = 3;
while (- -count > 0)
cout << count << " ";
*/
#include <iostream>
using namespace std;

int main ( ) {
    int count = 3;
    while (--count > 0)
        cout << count << " "; // Outputs: 2 1
    cout << endl;
    return 0;
}