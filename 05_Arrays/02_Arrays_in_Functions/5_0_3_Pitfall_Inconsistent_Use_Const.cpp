#include <iostream>


double computeAverage(int a[], int numberUsed);
// This function does not change `a`
// But all the compiler sees is the declaration and `int a[]`,
// which is enough to makes it think `a` will be changed
// in other functions call of computeAverage.

void showDifference(const int a[], int numberUsed);

int main() {
    int myArray[5];
    std::cout << myArray[4];

    // You cannot use a variable for the array size in C++
    int number;
    std::cout << "Enter number of students:";
    std::cin >> number;
    // int score[number]; // This is not allowed in standard C++
    int score[5];

    // computeAverage(score, 3);

    std::cout << "\n";
    return 0;
}

void showDifference(const int a[], int numberUsed) {
    //double average = computeAverage(a, numberUsed);     // cannot convert const int* to int*
    int average = 2;
	std::cout << "Average of the " << numberUsed
              << " numbers is " << average << "\n"
              << "The numbers are:\n";
    for (int idx = 0; idx < numberUsed; ++idx)
        std::cout <<  a[idx] << " differs from avg by "
                  << (a[idx] - average) << "\n";
}