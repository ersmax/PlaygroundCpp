/*
Insert const before any of the following array parameters that can be changed
to constant array parameters.
void output(double a[], int size);
//Precondition: a[0] through a[size – 1] have values.
//Postcondition: a[0] through a[size – 1] have been written out.
void dropOdd(int a[], int size);
//Precondition: a[0] through a[size – 1] have values.
//Postcondition: All odd numbers in a[0] through a[size – 1]
//have been changed to 0.
*/

void output(const double a[], int size);    // <-- side effect: print
//Precondition: a[0] through a[size – 1] have values.
//Postcondition: a[0] through a[size – 1] have been written out.

void dropOdd(int a[], int size);
//   Precondition: a[0] through a[size – 1] have values.
//   Postcondition: All odd numbers in a[0] through a[size – 1]
// have been changed to 0.

// Explanations:
// In the function `output`, the array parameter `a` is only used for reading values
// to print them out. Therefore, it can be declared as a constant array parameter
// by adding `const` before the type. This prevents any modification of the array
// elements within the function, which is appropriate since the function's purpose
// is to output the values without changing them.

// In the function `dropOdd`, the array parameter `a` is modified to change odd
// numbers to 0. Therefore, it cannot be declared as a constant array parameter,
// since the function needs to modify the elements of the array.

int main() {
	return 0;
}