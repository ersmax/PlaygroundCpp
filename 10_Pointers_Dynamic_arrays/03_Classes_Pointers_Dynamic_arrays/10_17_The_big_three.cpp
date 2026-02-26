/*
a.  Explain carefully why no overloaded assignment operator is needed when
the only data consists of built-in types.
b. Same as part a for a copy constructor.
c. Same as part a for a destructor.
*/

/*
a. With built-in types, a shallow copy is sufficient, because
	all member variables are copied in their value, and do not point
	to dynamic structure. There is no risk of overwriting current variables values,
	because there are no copying of pointers that point to the same variable
b. With built-in types, there is no risk of copying an object pointer that point to 
	the same dynamically allocated variables. Hence, there is no risk of changing 
	or deleting a variable of an object with a pointer of a second object.
c. With built-in types, there is no dynamic variables to destroy. Hence,
	there is no risk that an object that has a pointer that point to another dynamic
	variable of a second object creates undefined behaviour upon deletion.
*/

// Formally:
//   In the case of the assignment operator = and the copy constructor, if there are only
// built - in types for data, the copy mechanism is exactly what you want, so the default
// works fine.In the case of the destructor, no dynamic memory allocation is done
// (no pointers), so the default do - nothing action is again what you want.

int main( )
{
	return 0;
}