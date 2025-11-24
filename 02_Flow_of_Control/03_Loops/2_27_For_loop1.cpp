/*
What is the output of the following (when embedded in a complete program)?
for (int count = 1; count < 5; count+ +)
cout << (2 * count) << " ";
*/
#include <iostream>
using namespace std;

int main ( ) {
    for (int count = 1; count < 5; count++)
        cout << (2 * count) << " "; // Outputs: 2 4 6 8
    cout << endl;
    return 0;
}