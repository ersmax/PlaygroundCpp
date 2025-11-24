/*
Write an if-else statement that outputs the word Passed provided the value
of the variable exam is greater than or equal to 60 and also the value of the
variable programsDone is greater than or equal to 10. Otherwise, the if-else
statement outputs the word Failed. The variables exam and programsDone are
both of type int.
*/
#include <iostream>
using namespace std;

int main ( ) {
    int exam;
    int programsDone;

    cout << "Enter exam score:";
    cin >> exam;
    cout << "Enter number of programs done:";
    cin >> programsDone;

    if (exam >= 60 && programsDone >= 10)
        cout << "Passed\n";
    else
        cout << "Failed\n";

    return 0;
}