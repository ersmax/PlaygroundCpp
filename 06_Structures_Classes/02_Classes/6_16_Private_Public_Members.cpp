/*
When you define a C++ class, should you make the member variables public or
private? Should you make the member functions public or private?
*/

// Member variables ought to be private to guarantee data abstraction
// and information hiding. 
// Member functions that are part of the interface should be public.
// Helper functions that are used to support functions declared as public,
// should be declared private.

// Formally:
// The member variables should all be private.The member functions that are part
// of the interface should be public.You may also have auxiliary(helping) functions
// that are only used in the definitions of other member functions.These auxiliary
// functions should be private.

int main( )
{
	return 0;
}