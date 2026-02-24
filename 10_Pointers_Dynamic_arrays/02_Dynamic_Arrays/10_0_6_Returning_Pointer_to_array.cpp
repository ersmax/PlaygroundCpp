//   This program showcases the use of pointers 
// as a returned type of a function.
// This is important because in C++ an array is not
// allowed as the return type of a function.
// This is ILLEGAL: int [] someFunction();
// This is LEGAL:	int* someFunction();

#include <iostream>

int* doubler(int a[], int size);

int main( )
{
	int a[] = {1, 2, 3, 4, 5};
	int *b;
	b = doubler(a, 5);

	std::cout << "Array a:\n";
	for (const int element : a)
		std::cout << element << " ";
	std::cout << '\n';

	std::cout << "Array b:\n";
	for (int idx = 0; idx < 5; idx++)
		std::cout << b[idx] << " ";
	std::cout << '\n';

	delete [] b;
	b = nullptr;

	std::cout << '\n';
	return 0;
}

int* doubler(int a[], const int size)
{
	int *temp = new int[size];

	for (int idx = 0; idx < size; idx++)
		temp[idx] = 2 * a[idx];

	return temp;
}