//   Write a type definition for pointer variables that will be used to point to
// dynamically allocated arrays.The array elements are to be of type char.Call
// the type CharArray.

#include <iostream>

typedef char* CharArray;

int main( )
{
	CharArray p;
	p = new char[3] {'a', 'b', 'c'};
	for (int idx = 0; idx < 3; idx++)
		std::cout << p[idx] << " ";

	delete [] p;
	p = nullptr;

	std::cout << '\n';
	return 0;
}