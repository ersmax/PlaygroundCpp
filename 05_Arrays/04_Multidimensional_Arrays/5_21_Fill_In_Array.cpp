/*
Write code that will fill the array a (declared next) with numbers typed in at the
keyboard. The numbers will be input five per line, on four lines (although your
solution need not depend on how the input numbers are divided into lines).
int a[4][5];
*/

#include <iostream>
#include <iterator>     // for std::size
#include <limits>

void fillData(int numbers[][5], std::size_t size);
//   Precondition: size is the first dimension size of `numbers`
//   Postcondition: fill numbers up with integers.

int main( ) {
    int a[4][5];
    fillData(a, std::size(a));

    for (const int (&row)[5] : a) {     // a constant reference to array of 5 int
        for (const int element : row)
            std::cout << element << " ";
        std::cout << "\n";
    }

    std::cout << "\n";
    return 0;
}

void fillData(int numbers[][5], const std::size_t size) {
    for (size_t idx1 = 0; idx1 < size; ++idx1) {
        std::cout << "Enter " << 5
                  << " numbers for dimension " << idx1 + 1 << ":";

        for (int idx2 = 0; idx2 < 5; ++idx2) {
            int next;
            while (!(std::cin >> next)) {
                std::cout << "Not a number for number " << idx2 + 1 <<  ". Retry.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            numbers[idx1][idx2] = next;
        }
    }
}
