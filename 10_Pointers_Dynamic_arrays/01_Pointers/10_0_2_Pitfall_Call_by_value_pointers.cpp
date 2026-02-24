//   This program showcases the bad behaviour of pointers when passed as call-by-value parameter of a function.
//  In this program, we have a pointer variable p that points to an integer. 
//  We pass this pointer variable to a function called sneaky, which takes a pointer as a parameter. 
//  Inside the function, we modify the value pointed to by the parameter, which also modifies the value pointed to by p in the main function. 
//  This demonstrates that when we pass a pointer as a call-by-value parameter, we are passing the address of the variable, 
//  and any modifications made to the value at that address will affect the original variable in the calling function.


#include <iostream>

typedef int* IntPointer;

void sneaky(IntPointer temp);

int main( )
{
	IntPointer p;
	p = new int;
	*p = 77;
	std::cout << "Value of the variable pointed by p before the function call, *p == " << *p << '\n';
	sneaky(p);
	std::cout << "Value of *p after the function call, *p == " << *p << '\n';

	std::cout << '\n';
	return 0;
}

void sneaky(const IntPointer temp)
{
	*temp = 99;
	std::cout << "Inside function call, the value of variable pointer to by parameter, *temp == " << *temp << '\n';
}
