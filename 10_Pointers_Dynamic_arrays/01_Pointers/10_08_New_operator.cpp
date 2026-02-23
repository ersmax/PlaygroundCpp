/*
Describe the action of the new operator. What does the new operator return?
What are the indications of errors?
*/

//   The new operator creates a new unnamed dynamically allocated variable
// that returns a pointer to it. This dynamic variable is created and destroy
// at runtime, when the program runs.
// If there is not enough space in the heap or the freestore, which is the area
// in the memory reserved for dynamically allocated variables, then the new operator
// terminates the program (C++ 11+) or the new operator returns a special value, NULL, 
// depending on the version of the compiler.

// Formally:
//   The new operator takes a type for its argument. new allocates space on the freestore
// manager for a variable of the type of the argument.It returns a pointer to that
// memory, provided there is enough space.If there is not enough space, the new
// operator may return NULL, or may abort the program, depending on how your
// particular compiler works.



int main( )
{
	return 0;
}