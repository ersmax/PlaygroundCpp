/*
Write a function definition for a function called oneMore, which has a formal
parameter for an array of integers and increases the value of each array element
by 1. Add any other formal parameters that are needed.
*/

#include <iostream>

constexpr int SIZE = 10;

void oneMore(int container[], size_t size);

int main( ) {
    int numbers[SIZE];
    for (int& element : numbers)
        element = 0;
    oneMore(numbers, std::size(numbers));
    for (int element : numbers)
        std::cout << element << " ";
    std::cout << "\n";
    return 0;
}

void oneMore(int container[], const size_t size) {
    for (size_t idx = 0; idx < size; ++idx)
        ++container[idx];
}