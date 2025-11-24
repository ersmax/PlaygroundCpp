/*
What is the output produced by the following code?
int myArray[4][4], index1, index2;
for (index1 = 0; index1 < 4; index1++)
for (index2 = 0; index2 < 4; index2++)
myArray[index1][index2] = index2;
for (index1 = 0; index1 < 4; index1++)
{
for(index2 = 0; index2 < 4; index2++)
cout << myArray[index1][index2] << " ";
cout << endl;
}
*/

// Output:
// 0 1 2 3
// 0 1 2 3
// 0 1 2 3
// 0 1 2 3

#include <iostream>

int main( ) {
    int myArray[4][4], index1, index2;
    for (index1 = 0; index1 < 4; index1++)
        for (index2 = 0; index2 < 4; index2++)
            myArray[index1][index2] = index2;
    for (index1 = 0; index1 < 4; index1++) {
        for(index2 = 0; index2 < 4; index2++)
            std::cout << myArray[index1][index2] << " ";
        std::cout << std::endl;
    }
    return 0;
}