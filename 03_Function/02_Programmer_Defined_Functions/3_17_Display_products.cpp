/*
Write a definition for a void function that has three arguments of type int
and that outputs to the screen the product of these three arguments. Put the
definition in a complete program that reads in three numbers and then calls
this function.
*/
#include <iostream>
using namespace std;

void product(int n1, int n2, int n3);
// Precondition: three integers are passed to the function
// Postcondition: the product of the three integers is displayed

int main( ) {
    int n1, n2, n3;
    cout << "Enter 3 numbers (separated by space):";
    cin >> n1 >> n2 >> n3;
    product(n1, n2, n3);
    return 0;
}

void product(int n1, int n2, int n3) {
    cout << "The product is: "
         << n1 * n2 * n3;
}