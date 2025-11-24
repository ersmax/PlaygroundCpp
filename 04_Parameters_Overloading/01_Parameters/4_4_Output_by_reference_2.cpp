/*
What would be the output of the program in Display 4.0.2 if you omitted
the ampersands (&) from the first parameter in the function declaration and
function heading of swapValues? The ampersand is not removed from the
second parameter. Assume the user enters numbers as in the sample dialogue in
Display 4.0.2, that is 5 and 10.
*/

// 5 5
// This is because the changed valued to varaiable1 by swap
// is never saved in the variable saved in memory location of firstNum

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void getNumbers(int& input1, int& input2);
// Precondition: input1 and input2 are declared
// Postcondition: define the value of the 2 variables

void swapValues(int variable1, int& variable2);
// Precondition: the 2 variables are already defined
// Postcondition: swap the variables' values

void showResults(int ouput1, int output2);
// Precondition: the 2 variables are already defined
// Postcondition: show the variables' value on screen

int main( ) {
    int firstNum, secondNum;

    getNumbers(firstNum, secondNum);
    swapValues(firstNum, secondNum);
    showResults(firstNum, secondNum);
    return 0;
}

void getNumbers(int& input1, int& input2) {
    cout << "Enter two integers:";
    cin >> input1
        >> input2;
}

void swapValues(int variable1, int& variable2) {
    int temporary = variable1;

    variable1 = variable2;
    variable2 = temporary;
}

void showResults(int output1, int output2) {
    cout << "Numbers in reverse order: "
         << output1 << ", " << output2 << endl;
}