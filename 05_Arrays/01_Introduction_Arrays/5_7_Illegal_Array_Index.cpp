/*
What is wrong with the following piece of code?
int sampleArray[10];
for (int index = 1; index <= 10; index++)
sampleArray[index] = 3*index;
*/

// Answer:
// The index is out of range: it starts 1 position too high and goes up to 10 instead of 9,
// which goes out of memory allocated for the array.

#include <iostream>

int main( ) {
    int sampleArray[10];
    for (int index = 1; index <= 10; index++)
        sampleArray[index] = 3*index;
    for (size_t idx = 0; idx < 10; ++idx)
        std::cout << sampleArray[idx] << " ";
    std::cout << "\n";
    return 0;
}