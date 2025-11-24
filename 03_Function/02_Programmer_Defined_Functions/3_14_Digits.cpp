/*
Write a function definition for a function isDigit that takes one argument of
type char and returns a bool value. The function returns true if the argument
is a decimal digit; otherwise, it returns false.
*/
#include <iostream>
using namespace std;

bool isDigit(char c);
// return true if parameter is a digit

int main( ) {
    char character;
    char answer;

    do {
        cout << "Enter a character:";
        cin >> character;
        cout << "The character ("
             << character << "), is";
        if (!isDigit(character))
            cout << " not";
        cout << " a digit.\n";
        cout << "Continue? (y/Y = Yes):";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    cout << "End of testing.\n";
    return 0;
}

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}
