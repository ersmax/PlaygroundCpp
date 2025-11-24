/*
What is the output of the following code?
char symbol[3] = {'a', 'b', 'c'};
for (int index = 0; index < 3; index++)
cout << symbol[index];
*/

// Output: abc

#include <iostream>

int main( ) {
    char symbol[3] = {'a', 'b', 'c'};
    for (int index = 0; index < 3; index++)
        std::cout << symbol[index];
    std::cout << "\n";
    return 0;
}