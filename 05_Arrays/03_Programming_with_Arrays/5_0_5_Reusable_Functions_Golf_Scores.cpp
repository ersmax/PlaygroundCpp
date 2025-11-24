//   This programs highlights the importance of code reusability.
// The function `fillArray` uses a globally defined constant
// as a parameter to know the size of the array parameter
// (instead of using the global constant directly).
//   This helps later to reuse the function `fillArray`,
// even if the size of the array parameter changes to another
// constant or value in the function call.
// For instance, the next program 5_0_6_Searching_Array reuses this
// `fillArray` function with different global constant.
//   Additionally, displaying the declared size can still be
// a good idea to remind that the function needs this information
// in a critically important way (that is: array parameter is not a mere
// pass-by-reference, rather a pointer to the first indexed variable
// of the array in the memory, which needs the additional size parameter
// to know the last usable indexed variable).

// The program shows the difference between each of a list of golf scores
// and their average.

#include <iostream>

constexpr int MAX_NUMBER_SCORES = 10;

void fillArray(int scores[], int size, int& numberUsed);
//   Precondition: size is the declared size of the array `scores`
//   Postcondition: numberUsed is the n of values stored in `scores`.
// scores[0] through scores[numberUsed - 1] have been filled with
// nonnegative integers read from the keyboard.

void showDifference(const int scores[], int numberUsed);
//   Precondition: The first numberUsed indexed variables of `scores`
// have valid values.
//   Postcondition: Gives screen output showing how much each of
// the first numberUsed elements of `scores` differs from the average.

double computeAverage(const int scores[], int numberUsed);
//   Precondition: scores[0] through scores[numberUsed - 1] have values;
// numberUsed > 0.
//   Postcondition: Returns the avg of numbers scores[0] through
// scores[numberUsed - 1].

int main( ) {
    int score[MAX_NUMBER_SCORES], numberUsed;
    std::cout << "This program reads golf scores and shows\n"
              << "how much each differs from the average.\n";
    std::cout << "Enter golf scores:\n";
    fillArray(score, MAX_NUMBER_SCORES, numberUsed);
    showDifference(score, numberUsed);
    std::cout << "\n";
    return 0;
}

void fillArray(int scores[], int size, int& numberUsed) {
    std::cout << "Enter upo to " << size
              << " nonnegative whole numbers.\n"
              << "Mark the end with a negative number.\n";
    int next, idx = 0;
    std::cin >> next;
    while ((next > 0) && (idx < size)) {
        scores[idx] = next;
        ++idx;
        std::cin >> next;
    }
    numberUsed = idx;
}

void showDifference(const int scores[], const int numberUsed) {
    double average = computeAverage(scores, numberUsed);
    std::cout << "Average of the " << numberUsed
              << " scores = " << average << "\n";
    for (size_t idx = 0; idx < numberUsed; ++idx)
        std::cout << scores[idx] << " differs from average by "
                  << (scores[idx] - average) << "\n";
}

double computeAverage(const int scores[], const int numberUsed) {
    double total = 0;
    for (int idx = 0; idx < numberUsed; ++idx)
        total += scores[idx];
    if (numberUsed > 0)
        return (total / numberUsed);

    std::cout << "Error: no elements added.\n";
    return 0;
}

