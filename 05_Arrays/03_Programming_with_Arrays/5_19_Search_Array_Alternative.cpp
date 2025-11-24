/*
Following is the declaration for an alternative version of the function
search defined in Display 5.6. In order to use this alternative version of the
search function we would need to rewrite the program slightly, but for this
exercise all you need do is write the function definition for this alternative
version of search.
bool search(const int a[], int numberUsed, int target, int& where);
*/

#include <iostream>
#include <iterator>
#include <limits>
constexpr int SIZE = 10;

void fillArray(int a[], size_t size, int& numberUsed);
//   Precondition: size is the declared size of the array `numbers`
//   Postcondition: numberUsed is the n of values stored in `numbers`.
// scores[0] through scores[numberUsed - 1] have been filled with
// nonnegative integers read from the keyboard.

bool search(const int a[], int numberUsed, int target, int& where);
//   Precondition: numberUsed is <= the declared size of array `a`
// Also, a[0] through a[numberUsed - 1] have values.
//   Postcondition: If target is one of the elements a[0] through
// a[numberUsed - 1], then this function returns true and sets the value
// of where so that a[where] == target. Otherwise, this functions
// returns false and the value of where is unchanged.


int main( ) {
    int arr[SIZE], listSize, target;
    fillArray(arr, std::size(arr), listSize);
    char answer;
    int where;
    do {
        std::cout << "Enter a number to search:";
        if (!(std::cin >> target)) {
            std::cout << "Not a valid number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (search(arr, listSize, target, where))
            std::cout << "Element found at " << where << "\n\n";
        else
            std::cout << "Element not found.\n\n";
        std::cout << "Search again (y/n)?\n";
        std::cin >> answer;
    } while ((answer == 'y') || (answer == 'Y'));

    std::cout << "\n";
    return 0;
}

void fillArray(int a[], std::size_t size, int& numberUsed) {
    int idx = 0, next;
    std::cout << "Enter up to 10 numbers. Conclude with negative number.\n";
    while (idx < static_cast<int>(size)) {
        if (!(std::cin >> next)) {
            std::cout  << "Not a valid number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (next < 0) break;
        a[idx++] = next;
    }
    numberUsed = idx;
}

bool search(const int a[], const int numberUsed, int target, int& where) {
    for (int idx = 0; idx < numberUsed; ++idx)
        if (a[idx] == target) {
            where = idx;
            return true;
        }
    return false;
}
