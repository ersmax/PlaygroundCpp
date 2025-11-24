// Simple program that display two-dimensional array

#include <iostream>

void displayPage(const char page[][100], int sizeDimension1);
//   Precondition: array page has been filled already.
// sizeDimension1 is the size of the first dimension of the array.
//   Postcondition: display the indexed variables of the 2D-array

int main() {
    char page[30][100];
    displayPage(page, 30);
    std::cout << "\n";
    return 0;
}

void displayPage(const char page[][100], int sizeDimension1) {
    for (int idx1 = 0; idx1 < sizeDimension1; ++idx1) {
        for (int idx2 = 0; idx2 < 100; ++idx2)
            std::cout << page[idx1][idx2];
        std::cout << "\n";
    }
}
