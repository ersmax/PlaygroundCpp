/*
Give an input statement that will fill the variable theNumber (of type int) with
a number typed in at the keyboard. Precede the input statement with a prompt
statement asking the user to enter a whole number.
*/

#include <iostream>
using namespace std;

int main( ) {
    int theNumber;

    cout << "Please enter a whole number: ";
    cin >> theNumber;

    return 0;
}
