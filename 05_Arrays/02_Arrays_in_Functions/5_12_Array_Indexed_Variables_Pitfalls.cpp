/*
What (if anything) is wrong with the following code? The definition of
tripler is given in Self-Test Exercise 11.
int b[5] = {1, 2, 3, 4, 5};
for (int i = 1; i <= 5; i++)
tripler(b[i]);
*/

// Answer:
// The code has an off-by-one error in the loop condition. The loop should iterate from 0 to 4
// instead of 1 to 5, because array indexing in C++ starts at 0. The corrected loop should be:
// for (int i = 0; i < 5; i++).

// Practical note:
// There is no practical difference between showArray and showArray2.
// In a function parameter list `const int arr[]` is adjusted to `const int* arr`,
// so both functions take the same type: a pointer to `const int` and a `size_t` size.
// Both:
// - forbid modifying elements through the pointer (because of `const`),
// - allow changing the local pointer value inside the function (it's a copy),
// - lose the array size (so we must pass it separately).
//
// `arr[]` is just syntactic sugar that signals the parameter is an array;
// we may use `std::span` or a template array reference if we need to preserve size.

#include <iostream>

void tripler(int& n);

void showArray(const int arr[], size_t size);
// Precondition: size is the declared size of the array
// Postcondition: display the array elements.
//                Array decays to pointer to first element.

void showArray2(const int* arr, size_t size);
// Precondition: size is the declared size of the array
// Postcondition: display the array elements.
//                Array decays to pointer to first element.
//                This is equivalent to showArray.

int main( ) {
    int b[5] = {1, 2, 3, 4, 5};
    for (int& idx : b)
        tripler(idx);
    showArray(b, std::size(b));
    showArray2(b, std::size(b));
}

void tripler(int& n) {
    n *= 3;
}


void showArray(const int arr[], size_t size) {
    for (size_t i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void showArray2(const int* arr, size_t size) {
    for (size_t i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}