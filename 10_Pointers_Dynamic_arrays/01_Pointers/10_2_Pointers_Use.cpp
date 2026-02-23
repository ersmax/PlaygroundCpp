//Give at least three uses of the * operator. Name and describe each use

/*
1. int *a;
This is a pointer a. It allows us to create a pointer variable 
that points to the memory location or address in memory of a variable.

2. *b = 42;
This is the dereferencing operator. It allows us to produce the variable pointed to by b.

3. int f(int *a)
This is a pointer parameter, that is a pointer to an int variable

4. int* f(int a)
This is a function that returns a pointer type.
*/

// Formally:
int main( )
{
	int *p;				// 1. This declares a pointer to an int variable.
	*p = 17;			// 2. Here, * is the dereferencing operator. This assigns
						//     17 to the memory location pointed to by p.
	void func(int* p);	// 3. Declares p to be a pointer value parameter
	
	return 0;
}