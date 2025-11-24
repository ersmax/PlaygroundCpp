/*
Write a function definition for a function called even that takes one argument
of type int and returns a bool value. The function returns true if its one
argument is an even number; otherwise, it returns false.
*/
#include <iostream>
using namespace std;

bool even(int number);
// return whether the parameter is even or not

int main( ) {
    int num;
    char answer;

    do {
        cout << "Enter the number:";
        cin >> num;
        cout << "The number is ";
        if (!even(num))
            cout << "not ";
        cout << "even.\n";
        cout << "Continue? (y/Y):";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    cout << "End of testing.\n";
    return 0;
}

bool even(int number) {
    return (number % 2 == 0);
}
