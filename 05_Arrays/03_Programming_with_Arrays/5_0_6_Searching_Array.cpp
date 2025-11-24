// Search a partially filled array of nonnegative integers.
//   The program demonstrates the reusability of the code,
// in particular the `fillArray` function defined in the
// 5_0_5_Reusable_Functions program.

#include <iostream>

constexpr int DECLARED_SIZE = 20;

void fillArray(int numbers[], int size, int& numberUsed);
//   Precondition: size is the declared size of the array `numbers`
//   Postcondition: numberUsed is the n of values stored in `numbers`.
// scores[0] through scores[numberUsed - 1] have been filled with
// nonnegative integers read from the keyboard.

int search(const int numbers[], int numberUsed, int searchedNumber);
//   Precondition: numberUsed is <= declared size of `numbers`
// Also, numbers[0] through numbers[numberUsed - 1] have values.
//   Postcondition: return the first index such that
// numbers[idx] == searchedNumber, otherwise return -1.

int main( ) {
    int arr[DECLARED_SIZE], listSize, target;
    fillArray(arr, DECLARED_SIZE, listSize);

    char answer;
    do {
        std::cout << "Enter a number to search:";
        std::cin >> target;
        int result = search(arr, listSize, target);
        if (result == -1)
            std::cout << target << " is not in the list.\n";
        else
            std::cout << target << " is stored in array position "
                      << result << "\n";

        std::cout << "Search again? (y/n):";
        std::cin >> answer;
    } while ((answer != 'N') && (answer != 'n'));
    std::cout << "Goodbye.\n";
    return 0;
}

void fillArray(int numbers[], int size, int& numberUsed) {
    std::cout << "Enter upo to " << size
              << " nonnegative whole numbers.\n"
              << "Mark the end with a negative number.\n";
    int next, idx = 0;
    std::cin >> next;
    while ((next >= 0) && (idx < size)) {
        numbers[idx] = next;
        ++idx;
        std::cin >> next;
    }
    numberUsed = idx;
}

int search(const int numbers[], int numberUsed, int searchedNumber) {
    int idx = 0;
    while (idx < numberUsed) {
        if (searchedNumber == numbers[idx])
            return idx;
        ++idx;
    }
    return -1;
}
