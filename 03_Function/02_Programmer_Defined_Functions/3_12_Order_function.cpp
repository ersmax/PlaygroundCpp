/*
Write a function definition for a function called inOrder that takes three
arguments of type int. The function returns true if the three arguments are in
ascending order; otherwise, it returns false. For example, inOrder(1, 2, 3)
and inOrder(1, 2, 2) both return true, whereas inOrder(1, 3, 2)
returns false.
*/
#include <iostream>
using namespace std;

bool inOrder(int num1, int num2, int num3);
// return true if parameters are in ascending order

int main( ) {
    int n1, n2, n3;
    char answer;

    do {
        cout << "Enter 3 nums:";
        cin >> n1 >> n2 >> n3;
        cout << "The 3 nums ("
             << n1 << ", " << n2
             << ", " << n3
             << "), are";
        if (!inOrder(n1, n2, n3))
            cout << " not";
        cout << " in ascending order.\n";
        cout << "Continue? (y/Y = Yes):";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    cout << "End of testing.\n";
    return 0;
}

bool inOrder(int num1, int num2, int num3) {
    return (num1 <= num2 && num2 <= num3);
}