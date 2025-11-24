/*
Write some C++ code that will fill an array a with 20 values of type int read in
from the keyboard. You need not write a full program, just the code to do this,
but do give the declarations for the array and for all variables.
*/

#include <iostream>

int main( ) {
    int values[20];
    for (int& element : values)
        std::cin >> element;
    for (const int& element : values)
        std::cout << element << " ";
    std::cout << "\n";
    return 0;
}