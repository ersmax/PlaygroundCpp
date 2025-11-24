/*
What is the output of the following code?
int i, temp[10];
for (i = 0; i < 10; i++)
temp[i] = 2*i;
for (i = 0; i < 10; i++)
cout << temp[i] << " ";
cout << endl;
for (i = 0; i < 10; i = i + 2)
cout << temp[i] << " ";
*/

// Answer:
// 0 2 4 6 8 10 12 14 16 18
// 0 4 8 12 16

#include <iostream>

int main( ) {
    int i, temp[10];
    for (i = 0; i < 10; i++)
        temp[i] = 2 * i;
    for (i = 0; i < 10; i++)
        std::cout << temp[i] << " ";
    std::cout << std::endl;
    for (i = 0; i < 10; i = i + 2)
        std::cout << temp[i] << " ";
    std::cout << std::endl;
    return 0;
}