/*
What is the output of the following program lines when they are embedded in a
correct program that declares number to be of type int?
number = (1/3) * 3;
cout << "(1/3) * 3 is equal to " << number;
*/
#include <iostream>
using namespace std;

int main() {
    double number = (1/3) * 3;                           // Use integer division
    cout << "(1/3) * 3 is equal to " << number << endl; // Output: (1/3) * 3 is equal to 0
    return 0;
}
