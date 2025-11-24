/*
Write a program that will read up to ten letters into an array and write the
letters back to the screen in the reverse order. For example, if the input is
abcd.
then the output should be
dcba
Use a period as a sentinel value to mark the end of the input. Call the array
letterBox. For this exercise you need not use any functions. This is just a toy
program and can be very minimal.
*/

#include <iostream>
#include <limits>
#include <span>

constexpr int SIZE = 10;

int main( ) {
    char letters[SIZE], next;
    int  idx = 0;
    std::cout << "Enter up to 10 numbers. Conclude with negative number.\n";
    while (idx < SIZE) {
        if (!(std::cin >> next)) {
            std::cout << "Not a valid letter.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (next == '.') break;
        letters[idx++] = next;
    }
    int numberUsed = idx;
    for (int index = numberUsed - 1; index >= 0; --index)
        std::cout << letters[index];

    std::cout << "\n";
    return 0;
}
