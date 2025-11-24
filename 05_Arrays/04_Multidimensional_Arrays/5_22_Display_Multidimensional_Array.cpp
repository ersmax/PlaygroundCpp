/*
Write a function definition for a void function called echo such that the
following function call will echo the input described in Self-Test Exercise 21,
and will echo it in the same format as we specified for the input (that is, four
lines of five numbers per line):
echo(a, 4);
*/

#include <iostream>
#include <iterator>     // for std::size
#include <limits>

void fillData(int numbers[][5], std::size_t size);
//   Precondition: size is the first dimension size of `numbers`
//   Postcondition: fill numbers up with integers.

void echo(const int numbers[][5], std::size_t size);
//   Precondition: numbers have been filled up with integers
//   Postcondition: show on console the array of arrays.

int main( ) {
    int a[4][5];
    fillData(a, std::size(a));
    echo(a, std::size(a));

    // echo is equivalent to the following
    std::cout << "\n";
    for (const int (&row)[5] : a) {     // a constant reference to array of 5 int
        for (const int element : row)
            std::cout << element << " ";
        std::cout << "\n";
    }

    std::cout << "\n";
    return 0;
}

void fillData(int numbers[][5], const std::size_t size) {
    for (size_t idx1 = 0; idx1 < size; ++idx1) {
        std::cout << "Enter " << 5
                  << " numbers for dimension " << idx1 + 1 << ":";

        for (int idx2 = 0; idx2 < 5; ++idx2) {
            int next;
            while (!(std::cin >> next)) {
                std::cout << "Not a number for number " << idx2 + 1 <<  ". Retry.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            numbers[idx1][idx2] = next;
        }
    }
}

void echo(const int numbers[][5], const std::size_t size) {
    for (std::size_t idx1 = 0; idx1 < size; ++idx1) {
        for (int idx2 = 0; idx2 < 5; ++idx2)
            std::cout << numbers[idx1][idx2] << " ";
        std::cout << "\n";
    }
}
