/*
Write a void function definition for a function called zeroBoth that has two
call-by-reference parameters, both of which are variables of type int, and sets the
values of both variables to 0.
*/
void zeroBoth(int& firstNumber, int& secondNumber);

int main( ) {
    int num1, num2;
    zeroBoth(num1, num2);
    return 0;
}

void zeroBoth(int& firstNumber, int& secondNumber) {
    firstNumber = 0;
    secondNumber = 0;
}
