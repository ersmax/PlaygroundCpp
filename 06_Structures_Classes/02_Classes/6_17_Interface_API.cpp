/*
When you define a C++ class, what items are considered part of the interface?
What items are considered part of the implementation?
*/

//   Abstract programming interface describes to the programmer the rules
// for how to use the class.
// It tells what the data of the object is supposed to represent,
// and the public member functions description that tell how to use these
// member functions.
//   Part of the interface: the public member functions with its description
// These represent the operations;
// and a description of the class and what the data represent.
//   Part of the implementation: the member variables (private), 
// and the private member functions. All the functions definitions.

// Formally:
// All the declarations of private member variables are part of the implementation.
// (There should be no public member variables.) All the declarations for public
// member functions of the class (which are listed in the class definitions), as well
// as the explanatory comments for these declarations, are parts of the interface.
//   All the declarations for private member functions are parts of the implementation.
// All member function definitions(whether the function is public or private) are
// parts of the implementation.

int main( )
{
	return 0;
}