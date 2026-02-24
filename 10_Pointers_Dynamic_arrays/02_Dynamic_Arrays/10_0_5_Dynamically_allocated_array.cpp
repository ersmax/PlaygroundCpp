//   The program illustrates the use of a dynamically allocated array.
// The program searches a list of numbers stored in a dynamically allocated array.
// The size of the array is determined when the program is run.The user is asked how
// many numbers there will be, and then the new operator creates a dynamically allocated
// array of that size.The size of the dynamic array is given by the variable arraySize.The
// size of a dynamic array need not be given by a constant, as in automatic variable array.
// It can, as in the program, be given by a variable whose value is determined when the program is run.

#include <iostream>

typedef int* IntPtr;

void fillArray(int a[], int size);	// or void fillArray(int* a, int size)
//   Precondition: `size` is the size of the array `a`
//   Postcondition: `a[0]` through `a[size-1]` have been filled with
// values read from the std console input.

int search(int a[], int size, int target); // or int search(int* a, int size, int target);
//   Precondition: `size` is the size of the array `a`
// The array elements `a[0]` through `a[size-1]` have values.
//   Postcondition: if target is in the array, returns the first
// index of target. If target is not in the array, returns -1.

int main( )
{
	std::cout << "The program searches a list of numbers.\n";

	int arraySize;
	std::cout << "How many numbers will be on the list?\n";
	std::cin >> arraySize;
	
	IntPtr a;
	a = new int[arraySize];
	fillArray(a, arraySize);

	int target;
	std::cout << "Enter a target to search for:\n";
	std::cin >> target;
	const int location = search(a, arraySize, target);
	if (location == -1)
		std::cout << target << " is not in the array\n";
	else
		std::cout << target << " is element " << location << '\n';


	delete [] a;
	a = nullptr;

	std::cout << '\n';
	return 0;
}

void fillArray(int a[], const int size)
{
	std::cout << "Enter " << size << " integers\n";
	for (int idx = 0; idx < size; idx++)
		std::cin >> a[idx];
}

int search(int a[], const int size, const int target)
{
	int idx = 0;
	while ((a[idx] != target) && (idx < size))
		idx++;
	if (idx == size)
		idx = -1;
	return idx;
}
