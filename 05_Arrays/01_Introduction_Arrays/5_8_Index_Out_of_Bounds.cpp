/*
Suppose we expect the elements of the array a to be ordered so that
a[0] ≤ a[1] ≤ a[2] ≤ ...
However, to be safe we want our program to test the array and issue a warning
in case it turns out that some elements are out of order. The following code is
supposed to output such a warning, but it contains a bug. What is it?
double a[10];
<Some code to fill the array a goes here.>
for (int index = 0; index < 10; index++)
if (a[index] > a[index + 1])
cout << "Array elements " << index << " and "
<< (index + 1) << " are out of order.";
*/

// Answer:
// The bug in the code is that the loop iterates from index 0 to 9
// (index < 10), but it tries to access a[index + 1], which will be a[10]
// when index is 9. This results in an "index out of bounds" error because
// the valid indices for the array a are from 0 to 9. To fix this, the loop
// should iterate only up to index 8 (index < 9) to avoid accessing an out-of-bounds element.

#include <iostream>

int main( ) {
    double a[10];
    for (int idx = 0; idx < std::size(a); ++idx)
        a[idx] = idx * 1.0;
    for (int idx = 0; idx < 9; ++idx)
        std::cout << "Array elements " << idx << " and "
                  << (idx + 1) << " are "
                  << ((a[idx] > a[idx + 1]) ? "out of order." : "in order.")
                  << "\n";
}