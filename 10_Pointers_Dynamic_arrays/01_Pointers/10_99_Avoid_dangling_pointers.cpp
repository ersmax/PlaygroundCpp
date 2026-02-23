//   This program shows a strategy to avoid dereferencing
// dangling pointers.
// Simply check first that the pointers is not an
// empty pointer, following the elimination of a 
// dynamic variable with delete.

#include <iostream>

int main( )
{
	int *p;
	p = new int(2);

	delete p;		
	// dynamic variable eliminated. 
	// Value of p is undefined

	p = nullptr;	
	// prevent unpredictable result by assigning 
	// empty pointer to p, if accessing *p

	if (p == nullptr)
	{
		std::cout << "Cannot apply dereferencing operator\n";
		std::exit(-1);
	}
	else
		*p = 42;	// example

	return 0;

}