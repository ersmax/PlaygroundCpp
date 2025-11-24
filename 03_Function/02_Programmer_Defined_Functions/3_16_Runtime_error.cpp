/*
Suppose you omitted the return statement in the function definition for
iceCreamDivision in Display 3.7. What effect would it have on the program?
Would the program compile? Would it run? Would the program behave any
differently?
*/

// Answer:
// If you omitted the return statement in the function definition for iceCreamDivision,
// the program would still compile and run correctly because iceCreamDivision is a void function.
// However, if the number of customers is 0, dividing by zero will cause a runtime error.
// This error is unrelated to the presence or absence of a return statement.


#include <iostream>
using namespace std;

void iceCreamDivision(int number, double totalWeight);
//Outputs instructions for dividing totalWeight ounces of ice cream
//among number customers. If number is 0, only an error
//message is output.

int main( ) {
    int number;
    double totalWeight;

    cout  << "Enter the n of customers:";
    cin >> number;
    cout << "Enter the weight of ice cream to divide:";
    cin >> totalWeight;

    iceCreamDivision(number, totalWeight);

    return 0;
}

void iceCreamDivision(int number, double totalWeight) {
    double portion;

    if (number == 0) {
        cout << "Cannot divide among zero customers.\n";
        // return;
    }

    portion = totalWeight/number;
    cout << "Each one receives: "
         << portion << " grams of ice cream.\n";
}
