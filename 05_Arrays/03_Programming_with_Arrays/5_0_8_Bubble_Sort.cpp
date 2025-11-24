//   In the bubble sort algorithm, the largest value is successively "bubbled"
// toward an array of numbers we want to sort.
// It works by repeatedly stepping through the list to be sorted,
// comparing each pair of adjacent items and swapping them if they are in the wrong order.
// The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.
//   The standard library function std::swap is very convenient for swapping two values.
// The bubble step consists of an inner loop that start from the first element in the array,
// and moves the largest value to the end of the array, followed by an outer loop
// that repeats this process for the entire array, starting from the back.
//   For instance, we have {3, 10, 9, 2, 5}.
// The first pass of the inner loop compares 3 and 10, and leaves them unchanged.
// Then it compares 10 and 9, and swaps them, resulting in {3, 9, 10, 2, 5}.
// Next, it compares 10 and 2, and swaps them, resulting in {3, 9, 2, 5, 10}.
// Finally, it compares 10 and 5, and swaps them, resulting in {3, 9, 2, 5, 10}.
// After the first pass, the largest value, 10, is in its correct position at the end
// of the array.
// The outer loop then repeats this process for the remaining unsorted portion of the array,
// until the entire array is sorted.
// Time complexity is O(n^2) and space O(1).
//    The pseudo-code is:
// for (int i = length - 1; i > 0; --i) {
//     for (int j = 0; j < i; ++j) {
//         if (array[j] > array[j + 1]) {
//             swap(array[j], array[j + 1]);
//         }
//     }

#include <iostream>     // for std::cout,
#include <iterator>     // for std::size
#include <utility>      // for std::swap

void bubblesort(int numbers[], int size);
//   Precondition: The array elements numbers[0] through numbers[size - 1] have values.
//   Postcondition: The values of number[0] through numbers[size -1] have been
// rearranged so that numbers[0] <= numbers[1] <=  ... <= numbers[size-1].
// Bubble the largest elements to the right.

int main( ) {
    int numbers[] = {3, 10, 9, 2, 5, 1};

    bubblesort(numbers, std::size(numbers));
    for (const int element : numbers)
        std::cout << element << " ";
    std::cout << "\n";
    return 0;
}

void bubblesort(int numbers[], const int size) {
    for (int outerIdx = size - 1; outerIdx > 0; --outerIdx)
        for (int innerIdx = 0; innerIdx < outerIdx; ++innerIdx)
            if (numbers[innerIdx] > numbers[innerIdx + 1])
                std::swap(numbers[innerIdx], numbers[innerIdx + 1]);
}
