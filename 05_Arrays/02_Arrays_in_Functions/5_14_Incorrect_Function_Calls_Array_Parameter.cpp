/*
Consider the following function definition:
void too2(int a[], int howMany) {
    for (int index = 0; index < howMany; index++)
        a[index] = 2;
}
Which of the following are acceptable function calls?
int myArray[29];
too2(myArray, 29);
too2(myArray, 10);
too2(myArray, 55);
too2(myArray[ ], 10)
int yourArray[100];
too2(yourArray, 100);
too2(myArray[3], 29);
*/

// Answer:
// too2(myArray, 29); = yes, fills all 29 elements with 2
// too2(myArray, 10); = yes, fills first 10 elements with 2
// too2(myArray, 55); = no, out of bounds access for array of size 29
// too2(myArray[ ], 10); = no, incorrect syntax for passing array as argument
//                         (unnecessary brackets)
// too2(yourArray, 100); = yes, fills all 100 elements with 2
// too2(myArray[3], 29); = no, passing single int element instead of array

int main() {
    return 0;
}