/*
What is the output produced by the following program?
*/
// Answer: Hello.
// Goodbye.
// One more time.
// Hello.
// End.

#include <iostream>
using namespace std;

void friendly();
// Precondition: None.
// Postcondition: Outputs a friendly greeting
void shy(int audienceCount);
// Precondition: audienceCount is greater than 4.
// Postcondition: If audienceCount is greater than 0,
// outputs a friendly greeting.

int main () {
    friendly();
    shy(6);
    cout << "One more time:\n";
    shy(2);
    friendly();
    cout << "End.\n";
    return 0;
}

void friendly() {
    cout << "Hello.\n";
}
void shy(int audienceCount) {
    if (audienceCount < 5)
        return;
    cout << "Goodbye.\n";
}
