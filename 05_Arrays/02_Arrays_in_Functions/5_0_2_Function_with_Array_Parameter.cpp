#include <iostream>

void fillUp(int (&a)[10]);
// Reference to an array of (known) size 10
// fixed binding without changing size.
//
// Precondition: size is the declared size of the array
//               User will type in the array element or indexed variables
// Postcondition: The array `a` is filled with integers from console inline


void fillUp2(int a[], int size);
// Notes: Array decays to pointer (int* a). No pass-by-reference here.
// However, we have a dynamic array that can accept different sizes.
//
// Precondition: size is the declared size of the array
//               User will type in the array element or indexed variables
// Postcondition: The array `a` is filled with integers from console inline
//                The difference here is that the array decays to pointer to first element indexed by 0.
//                Thus, for practical purposes, it `behaves` very much like a call-by-reference parameter.
//                The practical difference is that array parameter is not the same as call-by-reference
//                because everything abu=out the array is told (location in memory, types of each element
//                and hence size of each indexed variable), except for the size of the array.


void showContent(const int a[], int sizeOfContainer);
// Precondition: sizeOfContainer is the declared size of the array.
//               All indexed variables of the array have been given values.
// Postcondition: display the content of the array on screen.

int main( ) {
    int myArray[10] = {};

    fillUp(myArray);
    fillUp2(myArray, std::size(myArray));
    showContent(myArray, std::size(myArray));
    std::cout << "\n";
    return 0;
}

void fillUp(int (&a)[10]) {
    std::cout << "Enter " << std::size(a) << " numbers:\n";
    for (int& element : a)
        std::cin >> element;
    std::cout << "The last array index used is: " << (std::size(a) - 1) << "\n";
}

void fillUp2(int a[], int size) {
    std::cout << "Enter " << size << " numbers:\n";
    for (size_t  idx = 0; idx < size; ++idx)
        std::cin >> a[idx];
    std::cout << "The last array index used is: " << (size - 1) << "\n";
}

void showContent(const int a[], int sizeOfContainer) {
    std::cout << "The array contains the following values:\n";
    for (size_t idx = 0; idx < sizeOfContainer; ++idx)
        std::cout << a[idx] << " ";
    std::cout << "\n";
}


