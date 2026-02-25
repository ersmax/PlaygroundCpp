//   This program showcases the creation of two-dimensional dynamic array (that is, an array of arrays)

#include <iostream>

typedef int* IntArrayPtr;

int main( )
{
	int d1, d2;
	std::cout << "Enter the row and column dimensions of the array:\n";
	std::cin >> d1 >> d2;

	IntArrayPtr *m = new IntArrayPtr[d1];
	// Array of d1 pointers, each of which can name a dynamic array of ints

	for (int idx = 0; idx < d1; idx++)
		m[idx] = new int[d2];
	// m is a d1-by-d2 array

	std::cout << "Enter " << d1 << " rows of " << d2 << " integers each:\n";
	for (int idx = 0; idx < d1; idx++)
		for (int jdx = 0; jdx < d2; jdx++)
			std::cin >> m[idx][jdx];

	std::cout << "Echoing the two-dimensional array:\n";
	for (int idx = 0; idx < d1; idx++)
	{
		for (int jdx = 0; jdx < d2; jdx++)
			std::cout << m[idx][jdx] << " ";
		std::cout << '\n';
	}

	for (int idx = 0; idx < d1; idx++)
	{
		delete [] m[idx];	// delete inner arrays in the freestore/heap
		m[idx] = nullptr;
	}
	delete [] m;
	m = nullptr;
	
	std::cout << '\n';
	return 0;
}