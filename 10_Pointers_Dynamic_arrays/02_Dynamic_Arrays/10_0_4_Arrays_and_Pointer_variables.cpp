//   This program showcases how arrays decay to pointers when used in expressions.
// If we assign a pointer to a variable of integer, and then assign the pointer to an array of integers, 
// the pointer will point to the first element of the array.
// However, it is illegal to assign an array to a pointer variable directly, as arrays are not modifiable lvalues.
// You cannot change the pointer value in an array variable.
// For example, it is illegal to write a = p2; where p2 is a pointer to an int variable (e.g. int *p2),
// and `a` is an array variable.
//   The underlying reason why this assignment does not work is that an array variable is not
// of type int*, but its type is a const version of int* .An array variable, like a, is a
// pointer variable with the modifier const, which means that its value cannot be changed.


#include <iostream>

typedef int* IntPtr;

int main( )
{
	IntPtr p;
	int a[10];

	for (int idx = 0; idx < 10; idx++)
		a[idx] = idx;

	p = a;
	for (int idx = 0; idx < 10; idx++)
		p[idx] = p[idx] + 1;

	for (int idx = 0; idx < 10; idx++)
		std::cout << a[idx] << " ";

	std::cout << '\n';
	return 0;
}