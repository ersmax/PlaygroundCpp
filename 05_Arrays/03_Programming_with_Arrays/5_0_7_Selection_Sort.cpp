//   The selection sort is an algorithm that iterates through an array twice:
// in the outer loop, we iterate for every indexed variable in the array;
// in the inner loop, we compare the next indexed variables to look for the
// smallest element. Finally, we compare the indexed variable in the outer loop
// with the indexed variable in the inner loop to know which one is the smallest,
// and in case the inner variable is smaller, we switch it with the indexed variable
// in the outer loop, after the inner loop finishes.
// Time complexity is O(n^2) and space O(1).
//   The selection sort works by repeatedly finding the minimum element
// (considering ascending order) from the unsorted part and putting it at the beginning.
// The algorithm maintains two parts:
// 1) The subarray which is already sorted.
// 2) The remaining subarray which is unsorted.
//   In every iteration of the selection sort, the minimum element from the unsorted
// subarray is picked and moved to the sorted subarray.
// It is not a stable sorting algorithm, which means that the relative order of
// equal sort items is not preserved. The selection sort performs well on small
// lists and is easy to implement, but it is inefficient on large lists and generally
// performs worse than the similar insertion sort.

#include <iostream>
#include <span>         // C++ 20 feature
#include <iterator>     // for std::size
#include <utility>      // for std::swap

constexpr int MAX_SIZE = 10;

void fillArray(int numbers[], int size, int& numberUsed);
//   Precondition: size is the declared size of `sampleArray`.
//   Postcondition: numberUsed is the n of values stores in `sampleArray`.
// sampleArray[0] through sampleArray[numberUsed - 1] have been filled with
// nonnegative integers read from the keyboard.

void sort(int numbers[], int numberUsed);
//   Precondition: numberUsed <= size of `numbers`
// The indexed variables of `numbers[0]` through `numbers[numberUsed-1]` have values
//   Postcondition: The values of numbers[0] through numbers[numberUsed-1] have
// been rearranged so that numbers[0] <= numbers[1] <= ... <= numbers[numberUsed-1].

int findSmallest(const int numbers[], int startIndex, int numberUsed);
//   Precondition: 0 <= startIndex < numberUsed. Reference array elements in `numbers`
// have values.
//   Postcondition: returns the index idx such that numbers[idx] is the smallest of
// the values numbers[startIndex], numbers[startIndex + 1], ..., numbers[numberUsed - 1].

int main( ) {
    std::cout << "This program sorts numbers from lowest to highest.\n";
    int sampleArray[MAX_SIZE], numberUsed;
    fillArray(sampleArray, std::size(sampleArray), numberUsed);
    sort(sampleArray, numberUsed);

    std::cout << "In sorted order the numbers are:\n";
    for (const int element : std::span<int>(sampleArray, numberUsed))  // loop through only the used part
        std::cout << element << " ";
    std::cout << "\n";
    return 0;
}

void fillArray(int numbers[], const int size, int& numberUsed) {
    std::cout << "Enter upo to " << size
              << " nonnegative whole numbers.\n"
              << "Mark the end with a negative number.\n";
    int next, idx = 0;
    std::cin >> next;
    while ((next>=0) && (idx < size)) {
        numbers[idx] = next;
        ++idx;
        std::cin >> next;
    }
    numberUsed = idx;
}

void sort(int numbers[], const int numberUsed) {
    // (1) subarray which is already sorted.
    for (int idxOuter = 0; idxOuter < numberUsed - 1; ++idxOuter) {
        int idxSmallest = findSmallest(numbers, idxOuter, numberUsed);

        if (idxSmallest != idxOuter)
            std::swap(numbers[idxOuter], numbers[idxSmallest]);
    }
}

int findSmallest(const int numbers[], const int startIndex, const int numberUsed) {
    int min = numbers[startIndex];
    int idxMin = startIndex;

    // (2) find minimum in the remaining subarray which is unsorted.
    for (int idx = startIndex + 1; idx < numberUsed; ++idx)
        if (numbers[idx] < min) {
            min = numbers[idx];
            idxMin = idx;
        }

    return idxMin;
}
