/*
Program demonstrates the use of reference parameters in C++ to reverse the values of two integers.
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void getNumbers(int& input1, int& input2);
// Precondition: input1 and input2 are declared
// Postcondition: define the value of the 2 variables

void swapValues(int& variable1, int& variable2);
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

void swapValues(int& variable1, int& variable2) {
    int temporary = variable1;

    variable1 = variable2;
    variable2 = temporary;
}

void showResults(int output1, int output2) {
    cout << "Numbers in reverse order: "
         << output1 << ", " << output2 << endl;
}
