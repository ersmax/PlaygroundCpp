/*
Write a program that will read up to ten nonnegative integers into an array
called numberArray, and then write the integers back to the screen. For this
exercise you need not use any functions. This is just a toy program and can be
very minimal.
*/

#include <iostream>
#include <limits>
#include <span>
#include <iterator>

constexpr int SIZE = 10;

int main( ) {
    int numbers[SIZE], next, idx = 0;
    std::cout << "Enter up to 10 numbers. Conclude with negative number.\n";
    while (idx < std::size(numbers)) {
        if (!(std::cin >> next)) {
            std::cout << "Not a valid number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (next < 0) break;
        numbers[idx++] = next;
    }
    int numberUsed = idx;
    for (int element : std::span<int>(numbers, numberUsed))
        std::cout << element << " ";
    
    std::cout << "\n";
    return 0;
}
