/*
Write a function named outOfOrder that takes as parameters an array of
double and an int parameter named size and returns a value of type int.
This function will test this array for being out of order, meaning that the array
violates the following condition:
a[0] <= a[1] <= a[2] <= ...
The function returns –1 if the elements are not out of order; otherwise, it
will return the index of the first element of the array that is out of order. For
example, consider the declaration
double a[10] = {1.2, 2.1, 3.3, 2.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0};
In the previous array, a[2] and a[3] are the first pair out of order and a[3]
is the first element out of order, so the function returns 3. If the array were
sorted, the function would return –1.
*/

#include <iostream>

int outOfOrder(const double numbers[], size_t size);
// Postcondition: return whether the indexed variables in `numbers` is sorted or not

int main( ) {
    double a[10] = {1.2, 2.1, 3.3, 2.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0};
    int result = outOfOrder(a, std::size(a));
    std::cout << result << "\n";
    return 0;
}

int outOfOrder(const double numbers[], size_t size) {
    for (size_t idx = 0; idx < size - 1; ++idx)
        if (numbers[idx] > numbers[idx + 1])
            return static_cast<int>(idx + 1);
    return -1;
}
