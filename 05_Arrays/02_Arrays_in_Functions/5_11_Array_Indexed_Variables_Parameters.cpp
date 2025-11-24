/*
Consider the following function definition:
void tripler(int& n)
{
n = 3 * n;
}
Which of the following are acceptable function calls?
int a[3] = {4, 5, 6}, number = 2;
tripler(a[2]);
tripler(a[3]);
tripler(a[number]);
tripler(a);
tripler(number);
*/

// Answer:
// tripler (a[2]) = yes and produces a = [4, 5, 18]
// tripler (a[3]) = no, index 3 is out of bounds for array of size 3
// tripler (a[number]) = yes and produces a = [4, 5, 18]
// tripler (a) = no, array name cannot be passed as argument to a function that accepts an int parameter
// tripler (number) = yes and produces number = 6

#include <iostream>
#include <algorithm>
#include <iterator>

void tripler(int& n);

void showArray(const int* myArray, int size);

int main( ) {
    int a[3] = {4, 5, 6}, number = 2;
    int aCopy[3];
    std::copy(std::begin(a), std::end(a), std::begin(aCopy));

    tripler(a[2]);
    showArray(a, std::size(a));

    tripler(aCopy[number]);
    showArray(aCopy, std::size(aCopy));

    tripler(number);
    std::cout << number << "\n";

    std::cout << "\n";
    return 0;
}

void tripler(int& n) {
    n = 3 * n;
}

void showArray(const int* myArray, int size) {
    for (size_t idx = 0; idx < size; ++idx)
        std::cout << myArray[idx] << " ";
    std::cout << "\n";
}
