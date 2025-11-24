/*
Identify any errors in the following array declarations.
a. int x[4] = { 8, 7, 6, 4, 3 };
b. int x[] = { 8, 7, 6, 4 };
c. const int SIZE = 4;
int x[SIZE];
*/

// Answer:
// a. Error: Too many initializers for the array of size 4.
//           It should have only 4 elements or indexed variables.
// b. No error: The size of the array is determined by the number of initializers.
// c. No error: This is a valid declaration of an array of size 4 using a constant variable.
//              If one used a non-constant variable for the size of a built-in C-style array,
//              it would be an error in C++, because some compilers do not support variable-length
//              arrays.

int main() {
	return 0;
}