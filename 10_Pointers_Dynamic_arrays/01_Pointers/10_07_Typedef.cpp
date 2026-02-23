/*
Write a definition for a type called NumberPtr that will be the type for
pointer variables that hold pointers to dynamic variables of type double.
Also, write a declaration for a pointer variable called myPoint, which is of
type NumberPtr.
*/

#include <iostream>

typedef double* NumberPtr;

int main( )
{
	NumberPtr myPoint;
	myPoint = new double(23.4);
	std::cout << *myPoint << '\n';


	std::cout << '\n';
	return 0;
}